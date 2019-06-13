"""
/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B - Petya and Countryside                      #
*************************************************************/
"""

sec=1 # section rain flow
max_sec=0
n = int(input())
hights=list(map(int,input().split(' ')))


for i in range (n):
    for j in  range(i+1,n):
        if hights[j]>hights[j-1]:
            break
        else:
            sec+=1
            
    for j in range(i-1,-1,-1):
        if hights[j]>hights[j+1]:
            break
        else:
            sec+=1
    max_sec=max(max_sec,sec)
    sec=1
    
print (max_sec)
