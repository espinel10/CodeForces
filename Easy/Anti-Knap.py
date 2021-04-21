def solve(n,k):
  a=[i+1 for i in range(n)]
  out=[]
  for i in range(n):
    if k-a[i] not in a[i+1:] and k-a[i]!=0:
      out.append(str(a[i]))
  print(len(out))
  print(" ".join(out))


T=int(input().strip())
for i in range(1, T+1):
    ent=list(map(int,input().split(" ")))
    N=ent[0]
    K=ent[1]
    solve(N,K)