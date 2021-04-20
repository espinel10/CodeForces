def solver(ent,N):
  b=['0']*N
  temp=ent[N-1]
  for i in range(N-1,-1,-1):
    if temp !=0 or ent[i] !=0:
      b[i]='1'
      temp=max(temp,ent[i])-1
    else:
      temp=ent[i]
  
  print(" ".join(b))


T=int(input().strip())
for i in range(1, T+1):
    N=int(input().strip())
    ent=list(map(int,input().split(" ")))
    solver(ent,N)
   