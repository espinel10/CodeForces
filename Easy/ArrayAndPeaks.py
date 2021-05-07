
def Solve(n,k):
  if (2*k)<n:
    numeros=[i+1 for i in range(n)]
    mayores=numeros[n-k:]
    menores=numeros[:n-k]
    sal=[]
    j=0
    while len(sal)<n:
      if j%2==0:
        if len(mayores)==0:
          sal=sal+menores
        else:
          sal.append(menores.pop(0))
      else:
        sal.append(mayores.pop())
      j=j+1 

    out=list(map(str,sal))
    print(" ".join(out))

  else:
    print("-1")
   

T=int(input().strip())
for _ in range(1, T+1):
    N,K=input().split(" ")
    N=int(N)
    K=int(K)
    Solve(N,K)