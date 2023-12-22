from openpyxl import load_workbook
workbook=load_workbook(filename='excelFile.xlsx')
sheet=workbook.active
i=0
n=input(int('Enter how many values u want to enter'))
while i<n:
    name=input('Enter your name')
    email=input("enter your Email")
    phone=input("Enter your phone")
    data=[name,email,phone]
    sheet.append(data)
    i+=1

workbook.save(filename='excelFile.xlsx')
