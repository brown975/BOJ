a,s=map(int,input().split())
d,f=map(int,input().split())
g,h=map(int,input().split())
if max(abs(g-a),abs(h-s))<abs(g-d)+abs(h-f):
       print('bessie')
elif max(abs(g-a),abs(h-s))>abs(g-d)+abs(h-f):
       print('daisy')
else:
       print('tie')
