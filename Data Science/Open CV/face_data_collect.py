# Write a Python Script that captures images from your webcam video stream
# Extracts all Faces from the image frame (using haarcascades)
# Stores the Face information into numpy arrays
# we will crop the largest face and ask the user to enter the name of person
# store it.

# 1. Read and show video stream, capture images
# 2. Detect Faces and show bounding box (haarcascade)
# 3. Flatten the largest face image(gray scale) and save in a numpy array
# 4. Repeat the above for multiple people to generate training data

import cv2
import numpy as np

# Init Camera
cap = cv2.VideoCapture(0)

# Face Detections
face_cascade = cv2.CascadeClassifier("H:\Data-Structures\Data Science\Open Cv\haarcascade_frontalface_alt.xml")

skip = 0

face_data = []
database_path = 'H:\Data-Structures\Data Science\Open Cv\data/'


file_name = input("Enter the name of person : ")
while True:
    ret,frame = cap.read()
    if ret == False:
        continue
    
    gray_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)


    faces = face_cascade.detectMultiScale(frame,1.3,5)
    
    # we will find the area of the face w*h(f[2]*f[3])
    faces = sorted(faces,key=lambda f:f[2]*f[3])
    # pick the last face as the last face is the largest face
    for (x,y,w,h) in faces[-1:]:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(0,255,255),2)

        # extrac the face (Crop out the required face) : Region of Interest
        offset = 10 # for padding around the face
        face_section = frame[y-offset:y+h+offset,x-offset:x+w+offset]
        face_section = cv2.resize(face_section,(100,100))

        skip+=1
        # storing the every 10th frame
        if(skip%10==0):
            face_data.append(face_section)
            print(len(face_data))

    cv2.imshow("Face",frame)
    cv2.imshow("Face Section",face_section)


    key_pressed = cv2.waitKey(1) & 0xFF
    if key_pressed == ord('q'):
        break

# Convert our face list array into a numpy array
face_data = np.asarray(face_data)
face_data = face_data.reshape((face_data.shape[0],-1))
print(face_data.shape)

# save this data into our file system

np.save(database_path+file_name+'.npy',face_data)
print("Data Successfully saved at "+database_path+file_name+'.npy')

cap.release()
cv2.destroyAllWindows()