M = int(input())
temp1 = set(map(int, input().split()))

N = int(input())
temp2 = set(map(int, input().split()))

result = sorted(list(temp1.symmetric_difference(temp2)))

for x in result:
    print(x)
