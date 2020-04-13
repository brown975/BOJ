a,s,d,f,q,w,e,r=map(int,input().split())
if a<s<d<f<q<w<e<r:
    print("ascending")
elif r<e<w<q<f<d<s<a:
    print("descending")
else:
    print("mixed")
