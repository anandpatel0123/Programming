# data - training data X,Y
# read video stream
# extract the faces from the video stream
# knn will predict the faces
# Mapping betweet the class id and User Name
# Display the prediction ont the screen

import numpy as np
import cv2
import os

########## KNN #############
def dist(x1,x2):
    return np.sqrt(sum((x1-x2)**2))

def knn(X,Y,queryPoint,k=5):
    
    vals = []
    m = X.shape[0]
    
    for i in range(m):
        d = dist(queryPoint,X[i])
        vals.append((d,Y[i]))
        
    
    vals = sorted(vals)
    # Nearest/First K points
    vals = vals[:k]
    
    vals = np.array(vals)
    
    #print(vals)
    
    new_vals = np.unique(vals[:,1],return_counts=True)
    #print(new_vals)
    
    index = new_vals[1].argmax()
    pred = new_vals[0][index]
    
    return pred
    
########## KNN #############
    

cap = cv2.VideoCapture(0)

face_cascade = cv2.CascadeClassifier('H:\Data-Structures\Data Science\Open Cv\haarcascade_frontalface_alt.xml')

face_data = [] # X
labels = [] # Y
class_id = 0
name = {}
  
database_path = "H:\Data-Structures\Data Science\Open Cv\data/"

# Data Extraction from npy file
for file in os.listdir(database_path):
    if file.endswith('.npy'):
        name[class_id] = file[:-4]
        print("Database Loaded Successfull "+file)
        Xdata = np.load(database_path+file)
        face_data.append(Xdata)
        
        # create labels
        t = class_id*np.ones((Xdata.shape[0]))
        class_id+=1
        labels.append(t)

XDataset = np.concatenate(face_data,axis=0)
YDataset = np.concatenate(labels,axis=0)

print(XDataset.shape)
print(YDataset.shape)

# Face Extraction

while True:
    ret, frame = cap.read()

    if ret == False:
        continue

    faces = face_cascade.detectMultiScale(frame, 1.3, 5)


    for (x, y, w, h) in faces:

        # queryPoint for KNN
        offset = 10 
        face_section = frame[y-offset:y+h+offset ,x-offset:x+w+offset]
        face_section = cv2.resize(face_section,(100,100))

        # Prediction
        output = knn(XDataset,YDataset,face_section.flatten())

        pred_name = name[int(output)]
        cv2.putText(frame,pred_name,(x,y),cv2.FONT_HERSHEY_SIMPLEX,1,(255,0,0),2,cv2.LINE_AA)

        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 0, 255), 5)

    cv2.imshow("Video Frame", frame)

    key_pressed = cv2.waitKey(1) & 0xFF
    if key_pressed == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()