a,s,d,f,g=int(input()),int(input()),int(input()),int(input()),int(input())
h=0
if a<0:
    h+=-a*d+f
    a=0
print(h+(s-a)*g)
