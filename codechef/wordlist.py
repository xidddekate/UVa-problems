
import re
n=int(input())
inp=""
for i in range(0,n):
    inp+=input().lower()+" "
# print(inp)
lis=re.split(r";|:|,|\.|'|\n| ",inp)
lis.sort()
# print(lis)
ans=""
count=0
for i in range(0,len(lis)-1):
    if lis[i]==lis[i+1] or lis[i]=="":
        continue
    ans+=lis[i]+"\n"
    count+=1
if lis[-1]!=lis[-2] or lis[-1]!="":
    ans+=lis[-1]
    count+=1
print(count)
print(ans)