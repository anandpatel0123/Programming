# Recognise Faces using some classification algorithm - like Logistic, KNN, SVM etc.


# 1. load the training data (numpy arrays of all the persons)
		# x- values are stored in the numpy arrays
		# y-values we need to assign for each person
# 2. Read a video stream using opencv
# 3. extract faces out of it
# 4. use knn to find the prediction of face (int)
# 5. map the predicted id to name of the user 
# 6. Display the predictions on the screen - bounding box and name

import numpy as np
import cv2
import os

########## KNN CODE ############
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
################################

# Init Camera
cap = cv2.VideoCapture(0)

# Face Detections
face_cascade = cv2.CascadeClassifier("H:\Data-Structures\Data Science\Open Cv\haarcascade_frontalface_alt.xml")

skip = 0
dataset_path = "H:\Data-Structures\Data Science\Open Cv\data/"
face_data = [] #X data
labels = []  #Y data

class_id = 0 #  labes for the given files
names = {} # Mapping between id and name

# Data Preperation
# to list down all the files
for fx in os.listdir(dataset_path):
    if fx.endswith('.npy'):
        # mapping names and class_id
        names[class_id] = fx[:-4] # take all the chars accept last 4 chars
        print("Loaded "+fx)
        data_item = np.load(dataset_path+fx)
        face_data.append(data_item)

        # Creates Labes for the class
        target = class_id*np.ones((data_item.shape[0]))
        class_id += 1
        labels.append(target)


face_dataset = np.concatenate(face_data,axis=0) #X
face_labels = np.concatenate(labels,axis=0) #Y

print(face_dataset.shape)
print(face_labels.shape)

# Testing
while True:
    ret,frame = cap.read()
    if ret == False:
        continue

    faces = face_cascade.detectMultiScale(frame,1.3,5)

    for face in faces:
        x,y,w,h = face

        # Get the face Region of Interest
        offset = 10
        face_section = frame[y-offset:y+h+offset,x-offset:x+w+offset]
        face_section = cv2.resize(face_section,(100,100))
        # Predicted labes (out)
        out = knn(face_dataset,face_labels,face_section.flatten())

        pred_name = names[int(out)]
        cv2.putText(frame,pred_name,(x,y-10),cv2.FONT_HERSHEY_SIMPLEX,1,(255,0,0),2,cv2.LINE_AA)
        cv2.rectangle(frame,(x,y),(x+w,y+h),(0,255,255),2)

    cv2.imshow("Faces",frame)

    key = cv2.waitKey(1) & 0xFF
    if key == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()




