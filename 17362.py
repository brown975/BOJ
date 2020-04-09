a=int(input())
if a%8==1:
    print(1)
elif a%8==2 or a%8==0:
    print(2)
elif a%8==3 or a%8==7:
    print(3)
elif a%8==5:
    print(5)
else:
    print(4)
