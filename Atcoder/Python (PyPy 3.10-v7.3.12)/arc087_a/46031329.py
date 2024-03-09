n = input()
n = int(n)

inpt = input()
arr = inpt.split()

count = {}

for i in arr:
    count[int(i)] = 0

for i in arr:
    count[int(i)] = count[int(i)]+1

cnt = 0
for i, v in count.items():
    if i > v:
        cnt += v
    if i < v:
        cnt += v-i

print(cnt)
