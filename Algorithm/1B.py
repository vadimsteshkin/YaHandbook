n,k=map(int,input().split())
res1=1
res2=1
res3=1
for i in range(2,n+1):
    res1*=i
for j in range(2,(n-k+1)):
    res2*=j

print(res1//res2)