n = int(input())
a = list(map(int,input().split()))
result = []
sum = 0

for i in a:
    if i == 1:
        result.append(1)
        sum += 1
    else:
        result[-1] += 1

print(sum)
for i in result:
    print(i,end=" ")
