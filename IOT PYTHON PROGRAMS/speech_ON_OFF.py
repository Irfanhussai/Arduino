from time import sleep
import serial
import os
from gtts import gTTS
language='en'
arduino=serial.Serial("com4",  baudrate=9600,timeout =1.0)
while True:
    value=input("on/off")
    if value=="on":
        arduino.write(bytes("1","utf-8"))
        os.system("on.mp3")
    else:
        arduino.write(bytes("0","utf-8"))
        os.system("off.mp3")
    