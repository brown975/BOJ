a,s,d=map(int,input().split())
print(max([s*d,(a-s)*d,(a-d)*s,(a-s)*(a-d)])*4)
