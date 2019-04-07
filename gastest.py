from twilio.rest import Client
  
# Your Account Sid and Auth Token from twilio.com/console
  
account_sid = 'AC51a1249a281ada845675fec6fadef5b7'
  
auth_token = '7e3919ba01d5f171bb29c0164d63e9d6'
  
  
client = Client(account_sid, auth_token)
  
message = client.messages.create( body='Hello Faayez!',from_='whatsapp:+14155238886', to='whatsapp:+919158630452')
  
print(message.sid)