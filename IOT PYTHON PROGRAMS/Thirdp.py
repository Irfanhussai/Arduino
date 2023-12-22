import os
from gtts import gTTS
text=input("Do u want to tURN ON /off LIGHT")
language='en'
sond=gTTS(text,lang = language,slow=True)
sond.save('on.mp3')
sond.save('off.mp3')
os.system('hello.mp3')
