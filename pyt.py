n = int(input(""))
j = n-1
k = 0
for i in range(n):
  k = k + (i+1)*(10**j)
  j = j-1
print(k)