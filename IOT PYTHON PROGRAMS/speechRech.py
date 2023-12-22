import speech_recognition as sr
from time import sleep
import serial
import os
from gtts import gTTS
import pyttsx3
arduino=serial.Serial("com4",  baudrate=9600,timeout =1.0)
r = sr.Recognizer()
language='en'
while True:
    # mic = sr.Microphone()
    with sr.Microphone() as audio_file:
        print("Speak Please")
        # r.adjust_for_ambient_noise(audio_file)
        audio = r.listen(audio_file,timeout=1)
        text=r.recognize_google(audio)
        print("You said: " )
        text=text.lower()
        print(text)
        if (text=="light on"):
            arduino.write(bytes('1','utf-8'))
            sond=gTTS(text,lang = language,slow=True)
            sond.save('on.mp3')
            os.system('on.mp3')
        elif(text=="lights off"):
            arduino.write(bytes('0','utf-8'))
            sond=gTTS(text,lang = language,slow=True)
            sond.save('off.mp3')
            os.system('off.mp3')
            