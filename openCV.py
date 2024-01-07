import mediapipe as mp
import cv2
import numpy as np
import screen_brightness_control as sbc
from math import hypot


cap=cv2.VideoCapture(0)
mphands=mp.solutions.hands
hands=mp.Hands.Hands()
mpdraw=mp.solutions.drawing_utils

while True:
    a,img=cqap.read()
    imgRGB=cv2.cvtColor(img,cv2.COLOR_BGR2RGB)
    results=hands.process(imgRGB)
    lmlist=[]
    if results.multi_hand_landmarks:
        for handlandmark in results.multi_hand_landmarks:
            for id,lm in enumerate(handlandmark.landmark):
                h,w,=img.shape
                cx,cy=int(lm.x*w),int(lm.y*h)
                lmlist.append([id,cx,cy])
                mpdraw.draw_landmarkas(img,handmark,mphands.HAND_CONNECTIONS) 
    



    cv2.imshow("image",img)
    if cv2.waitkey(1) & 0xff == ord('q'):
        break