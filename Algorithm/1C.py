str_len=int(input())
str1=input()
str2=input()
new_str=''
n,m=0,0
for i in range((str_len*2)):
    if i%2==0:
        new_str+=str1[n]
        n+=1
    else:
        new_str+=str2[m]
        m+=1
print(new_str)