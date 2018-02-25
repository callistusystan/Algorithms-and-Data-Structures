T = int(input())
fact = [1]*1005
dp = [1]*1005
for i in range(1, 1001):
    fact[i] = fact[i-1] * i
    dp[i] = sum([int(x) for x in list(str(fact[i]))])

for _ in range(T):
    N = int(input())
    print(dp[N])
