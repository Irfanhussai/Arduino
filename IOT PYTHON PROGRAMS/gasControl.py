import speech_recognition as sr
from time import sleep
import serial
import os
from gtts import gTTS
import pyttsx3
arduino=serial.Serial("com4",  baudrate=9600,timeout =1.0)
r = sr.Recognizer()
language='en'



arduino.isOpen()
gase=arduino.readline().decode()
if(gase<="200"):
    sond=gTTS("gase is low",lang = language,slow=True)
    sond.save('on.mp3')
    os.system('on.mp3')
    print(arduino.readline())
elif(gase>="200"):
    sond=gTTS("gase is low",lang = language,slow=True)
    sond.save('on.mp3')
    os.system('on.mp3')
    print(arduino.readline())    
        
          
          

  
            