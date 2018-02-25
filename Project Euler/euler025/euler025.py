fib = [0,1]
memo = [1,1]

while True:
    fib.append(fib[-1] + fib[-2])
    memo.append(len(str(fib[-1])))
    if memo[-1] >= 5000:
        break

T = int(input())
for _ in range(T):
    N = int(input())
    lo = -1
    hi = len(memo)
    while lo != hi-1:
        mid = (lo+hi)//2
        if memo[mid] < N:
            lo = mid
        else:
            hi = mid
    print(hi)
