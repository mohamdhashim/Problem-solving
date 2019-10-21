"""***********************************************************
# e-mail       : mohamdmido2011@gmail.com                    #
# problem      : 1181A - Chunga-Changa                       #
# Github       : https://github.com/mohamdzezo               #
# Time to solve: 1 min                                       #
***********************************************************"""
x,y,z = map(int,(input().split()))
print((x+y)//z,end=' ')


if x//z + y//z == (x+y)//z:
    print(0)
else:
    print(min(z-x%z,z-y%z))
