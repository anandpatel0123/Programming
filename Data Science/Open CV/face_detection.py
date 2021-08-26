
import cv2

cap = cv2.VideoCapture(0)

face_cascade = cv2.CascadeClassifier('H:\Data-Structures\Data Science\Open Cv\haarcascade_frontalface_alt.xml')

while True:
    ret, frame = cap.read()
    print(frame)
    if ret == False:
        continue

    faces = face_cascade.detectMultiScale(frame, 1.3, 5)

    # scaleFactor      Parameter specifying how much the image size is reduced
    #                 at each image scale.

    # minNeighbors     Parameter specifying how many neighbors each candidate
    #                  rectangle should have to retain it.

    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 0, 255), 5)

    cv2.imshow("Video Frame", frame)

    key_pressed = cv2.waitKey(1) & 0xFF
    if key_pressed == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
