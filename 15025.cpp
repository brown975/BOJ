a,s=map(int,input().split())
if a==0 and s==0:
    print("Not a moose")
elif a==s:
    print("Even "+str(a*2))
else:
    print("Odd "+str(max(a,s)*2))
