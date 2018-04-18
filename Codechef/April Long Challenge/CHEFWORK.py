def Check3(t, n):
    count = 0
    for i in range(n):
        if t[i] is 3:
            count = count + 1

    return count


def case1(c, t, n):
    print("Case 1 finally called")


x = int(input())
c = map(int, input().split())
t = map(int, input().split())
value = Check3(t, x)
if value == x:
    case1(c, t, n)
g = []
# print("Elements of C" + str(c))
# print("Elements of t" + str(t))
# print()
# print(c)
