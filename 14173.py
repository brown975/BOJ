a,s,d,f=map(int,input().split())
q,w,e,r=map(int,input().split())
t=max(max(max(a,d),max(q,e))-min(min(a,d),min(q,e)),max(max(s,f),max(w,r))-min(min(s,f),min(w,r)))
print(t*t)
