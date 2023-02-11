mod = 10000000000

def exp(x, b):
  if b == 0:return 1
  elif b%2 == 0: return exp((x*x)%mod, b/2)%mod
  return (x*exp((x*x)%mod, (b-1)/2))%mod

def main():
  ans = 0
  for i in range(1, 1001):
    ans += exp(i, i)
    ans = ans % mod
  print(ans)

main()