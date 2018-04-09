MOD = 1000000007

def sumModN(num):
  return ((num*(num+1))//2)%MOD

def sumModN2(num):
  return ((num*(num+1)*(2*num+1))//6)%MOD

T = int(input())
for _ in range(T):
    N = int(input())
    if N == 1:
        print("1")
        continue
    term = (N-1)//2
    ans = 1+16*sumModN2(term)+4*sumModN(term)+4*term
    print(ans%MOD)
