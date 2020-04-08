a,s,d,f=map(int,input().split())
print(abs(a+s+d+f-min(min(a,s),min(d,f))*2-max(max(a,s),max(d,f))*2))
