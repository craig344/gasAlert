from twilio.rest import Client
import serial
import time

ser = serial.Serial('COM7', 115200)
ser.open()
print(ser)
print(ser.inWaiting())

# Account Sid and Auth Token from twilio.com/console
  
account_sid = 'AC8d3e12f09a7a652dc0536d607bb2bd07'
  
auth_token = '03fdafd559bbfca0c2d2527ca0d11af0'
  
client = Client(account_sid, auth_token)
while True:
    while ser.inWaiting():
        ##temp = ser.readline().decode()
        messageTosend="Alert !!! the Gas has leaked"
        message = client.messages.create( body=messageTosend ,from_='whatsapp:+14155238886', to='whatsapp:+917767026306')
    time.sleep(100)
print(message.sid)