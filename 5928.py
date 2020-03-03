a,s,d=map(int,input().split())
if a*1440+s*60+d-16511<0:
    print(-1)
else:
    print(a*1440+s*60+d-16511)
