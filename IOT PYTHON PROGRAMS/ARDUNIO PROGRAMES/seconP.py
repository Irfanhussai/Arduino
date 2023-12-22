from time import sleep
import serial
arduino=serial.Serial("com4",  baudrate=9600,timeout =1.0)
while True:
    value=input("Enter ON or OFF TO TURN LIGHT ON/OFF")
    arduino.write(bytes(value,"utf-8"))
    print("walk")
    sleep(2)
