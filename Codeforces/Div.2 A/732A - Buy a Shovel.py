"""***********************************************************
# by           : mohamd abda alazez hashim                   #
# e-mail       : mohamdmido2011@gmail.com                    #
# problem      : A. Buy a Shovel                             #
# Github       : https://github.com/mohamdzezo               #
# Time to solve: 1 min                                       #
***********************************************************"""

n,x = map(int,input().split())

n = n%10
sum = n
count = 1

while sum%10!=0 and sum%10!=x:
    sum += n
    count +=1

print(count)
