n = int(input())
arr = list(map(int,input().split()))
largest = -99999999
for i in range(n):
    if largest < arr[i]:
        largest = arr[i]

print(largest)