# Record a video and capture some frames

import cv2

cap = cv2.VideoCapture(0)

while True:
    ret,frame = cap.read()
    # Ret - True and False(Camers working properly or not)

    if ret == False:
        continue

    cv2.imshow("Video Frame",frame)

    key_pressed = cv2.waitKey(1) & 0xFF
    if key_pressed == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
