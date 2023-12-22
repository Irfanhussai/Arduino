# import cv2
# import speech_recognition as sr
# from time import sleep
# import pyttsx3
# # name=input("Who are you")
# # if name=="irfan":
# face=cv2.CascadeClassifier('casecadeFile.xml')
# video=cv2.VideoCapture('varun.mp4')
# while True:
#         ret,img=video.read()
#         cv2.imshow("window",img)
#         gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
#         faces=face.detectMultiScale(gray,1.3,5)
#         for(x,y,w,h)in faces:
#                cv2.rectangle(img=img,plt= (x,y),plt=(x+w,y+h),color=(255,255,0),thickness=2)

#         k=cv2.waitKey(10)&0Xff
#         if k==27:
#             break
# video.release()
# # import os
# # from gtts import gTTS
# # r = sr.Recognizer()
# # language='en'
# # # voice =gTTS("who are you",lang = language,slow=True)
# # # voice.save('on.mp3')
# # # os.system('on.mp3')
# # name=input("Who are you")
# # with sr.Microphone() as audio_file:
# #     audio = r.listen(audio_file,timeout=1)

import speech_recognition as sr
from time import sleep
import serial
import os
from gtts import gTTS
import pyttsx3
# arduino=serial.Serial("com4",  baudrate=9600,timeout =1.0)
r = sr.Recognizer()
import cv2

def capture() :
    cap = cv2.VideoCapture("varun.mp4")
    while True :
        ret, img = cap.read()
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        face_cascade = cv2.CascadeClassifier("casecadeFile.xml")
        faces = face_cascade.detectMultiScale(gray, 1.3, 5)
        for(x, y, w,  h) in faces :
            cv2.rectangle(img=img, pt1=(x, y), pt2=(x+w, y+h), color=(255,255, 0), thickness=2)
        cv2.imshow('window',img)
        k = cv2.waitKey(30) & 0xff
        if k == 27 :
            break

    cap.release()
    cap.escape()
if __name__=="__main__":
    # language='en'
    capture()
    # with sr.Microphone() as audio_file:
    #     print("Speak Please")
    #     # r.adjust_for_ambient_noise(audio_file)
    #     audio = r.listen(audio_file,timeout=3)
    #     text=r.recognize_google(audio)
    #     text=text.lower()
    #     # print(text)
    #     if (text=="ok"):
    #         # arduino.write(bytes('1','utf-8'))
    #         sond=gTTS("ok",lang = language,slow=True)
    #         sond.save('on.mp3')
    #         os.system('on.mp3')
    #         capture()
    #     else:
    #         print("Sorry")

    


