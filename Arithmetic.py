string=input()
num1=''
num2=''
num3=''
k=0
for i in range(0,len(string)):
  if string[i]!='+':
    num1=num1+string[i]
  else:
    k=i
    break
if num1!='X':
  num1=int(num1)
k=k+1
for j in range(k,len(string)):
  if string[j]!='=':
    num2=num2+string[j]
  else:
    k=j
    break
if num2!='X':
  num2=int(num2)
k=k+1
for z in range(k,len(string)):
    num3=num3+string[z]
if num3!='X':
  num3=int(num3)
if num1=='X':
  print(num3-num2);
elif num2=='X':
  print(num3-num1)
elif num3=='X':
  print(num1+num2)


