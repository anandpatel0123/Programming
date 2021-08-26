import cv2
import numpy as np

cap = cv2.VideoCapture(0)

face_cascade = cv2.CascadeClassifier('H:\Data-Structures\Data Science\Open Cv\haarcascade_frontalface_alt.xml')

face_data = []

data_path = 'H:\Data-Structures\Data Science\Open Cv\data/'

skip = 0
face_section=0

file_name = input("Enter Your Name : ")
while True:
    ret, frame = cap.read()

    if ret == False:
        continue




    faces = face_cascade.detectMultiScale(frame, 1.3, 5)
    faces = sorted(faces, key= lambda f: f[2]*f[3])


    for (x, y, w, h) in faces[-1:]:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 0, 255), 5)
        offset = 10 
        face_section = frame[y-offset:y+h+offset ,x-offset:x+w+offset]
        face_section = cv2.resize(face_section,(100,100))

        # Store every 10th frame
        skip+=1
        if (skip%10==0):
            face_data.append(face_section)
            print(len(face_data))


    cv2.imshow("Full Frame",frame)
    cv2.imshow("Cropped Frame",face_section)



    key_pressed = cv2.waitKey(1) & 0xFF
    if key_pressed == ord("q"):
        break



# convert face_data list into numpy array  
face_data = np.asarray(face_data)
face_data = face_data.reshape((face_data.shape[0]),-1)
print(face_data.shape)


# save face_data into numpy file
np.save(data_path+file_name+'.npy',face_data)
print("Data Successfully Saved at "+data_path+file_name+'.npy')

cap.release()
cv2.destroyAllWindows()