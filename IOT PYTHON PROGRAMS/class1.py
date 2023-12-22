name=input("Enter Your name")
email=input("Enter your email")
number=input("Enter your number")
with  open('file.txt','a') as f:
    f.write(name+" " +email+" "+number)
    print('\n')
print("data written")
with open('file.txt','r') as fi:
     data=fi.readlines()
     for x in data:
         print(x)
        
