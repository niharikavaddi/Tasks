def a():
  a=input("Enter first number:")
  if a>='a' and a<='z' or a>='A' and a<='Z' or a>='!' and a<='/' or a>=':' and a<='@' or a>='[' and a<='`' or a>='{' and a<='~':
    print("INVALID")
    return 0
  else:
    a=float(a)
    return a

def b():
  b=input("Enter second number:")
  if b>='a' and b<='z' or b>='A' and b<='Z' or b>='!' and b<='/' or b>=':' and b<='@' or b>='[' and b<='`' or b>='{' and b<='~':
    print("INVALID")
    return 0
  else:
    b=float(b)
    return b

def c():
  c=input("Choose any operation:\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n")
  if c>='a' and c<='z' or c>='A' and c<='Z' or c>='!' and c<='/' or c>=':' and c<='@' or c>='[' and c<='`' or c>='{' and c<='~':
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
    print("ERROR")

in1=0
in2=0
in3=0
while in1==0:
  in1=a()
else:
  while in2==0:
    in2=b()
  else:
    while in3==0:
      in3=c()
    else:
      check(in1,in2,in3)
