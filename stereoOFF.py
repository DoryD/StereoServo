#!/usr/bin/python
import serial, time
ser = serial.Serial('/dev/ttyACM0',9600)
print ser.portstr
time.sleep(3)
ser.write('90,'.encode())
