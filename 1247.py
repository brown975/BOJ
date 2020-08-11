for o in range(3):
    a=int(input());s=0
    for g in range(a):s+=int(input())
    print('-'if s<0 else('+'if s>0 else'0'))
