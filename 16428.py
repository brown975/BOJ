a=list(map(int,input().split()))
if a[1]<0:
    print(a[0]//a[1]+1)
    print(a[0]%a[1]-a[1])
else:
    print(a[0]//a[1])
    print(a[0]%a[1])
