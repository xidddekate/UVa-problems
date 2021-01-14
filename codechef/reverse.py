import re
# s="mynameissid"
# p='sid'
# sp=re.split('n|m|d',s)
# print(sp)

# b='Beautiful, is; better*than\
#     ugly'
n=int(input())
a=""
for i in range(n):
    a=a+input()

# print(type(a))
# a="dfgkd,dsgs"
li=re.split(r";|:|,|\.|'|\n| ",a)
# print(re.split(r'; |, |\*|\n',b))
print(li)
stn="" 
size=len(li)
for i in range(size-1,-1,-1):
    if li[i]!='':
        stn=stn+li[i]+" "
print(stn)
# ['Beautiful', 'is', 'better', 'than', 'ugly']