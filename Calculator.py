def a():
  a=input("Enter first number:")
  a=rule(a)
  if a==0:
    print("INVALID")
    return 0
  else:
    a=float(a)
    return a
    
def b():
  b=input("Enter second number:")
  b=rule(b)
  if b==0:
    print("INVALID")
    return 0
  else:
    b=float(b)
    return b

def c():
  c=input("Choose any operation:\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n")
  c=rule(c)
  if c==0:
    print("INVALID")
    return 0
  else:
    c=float(c)
    c=round(c)
    return c

def check(in1,in2,in3):
  if in3==1:
    print("SUM=",in1+in2);
  elif in3==2:
    print("DIFFERENCE=",in1-in2)
  elif in3==3:
    print("PRODUCT=",in1*in2)
  elif in3==4:
    if in2==0:
      print("Infinty")
    else:
      print("QUOTIENT=",in1/in2)
  else:
    return 
    
def rule(inp):
  if inp>='a' and inp<='z' or inp>='A' and inp<='Z' or inp>='!' and inp<='/' or inp>=':' and inp<='@' or inp>='[' and inp<='`' or inp>='{' and inp<='~' or inp==' ' or inp=='' or inp=='\t':
    return 0
  else:
    return inp
in1=0
in2=0
in3=0
in4=0
while in1==0:
  in1=a()
else:
  while in2==0:
    in2=b()
  else:
    while in3==0 and in3<=0 or in3>4:
      in3=c()
    else:
        check(in1,in2,in3)
