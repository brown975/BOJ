a=input()
if a[1]=='x':
  print(int(a[2:],16))
elif a[0]=='0':
  print(int(a[1:],8))
else:
  print(int(a))
