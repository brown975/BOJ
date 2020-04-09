a,s,d=map(int,input().split())
if a+s+d>99:
    print('OK')
elif a<s and a<d:
    print('Soongsil')
elif s<a and s<d:
    print('Korea')
else:
    print('Hanyang')
