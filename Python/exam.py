from collections import OrderedDict

n = int(input())
res = {}
for i in range(n):
    temp = int(input())
    if temp in res:
        res[temp] += 1
    else:
        res[temp] = 1

flag = False

for i in res:
    if res[i] == 1:
        flag = True
        print(i)
        break
if flag is False:
    print(-1)
