import  math


x=int(input())
s = input()
output = [0] * x
n = math.ceil(x/2)

for i in range (n):
    output[-1-i] = s[len(s)-1]
    s = s[:-1]
    if len(s) != 0:
        output[i]=s[len(s)-1]
        s = s[:-1]

for i in output:
    print(i,end='')
