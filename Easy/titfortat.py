def solve(ent,K):
    j =len(ent) - 1
    aux=ent[:]
    i=0
    while K>0 and i<j:
        if aux[i]!=0:
            if aux[i]>=K:
                aux[i]=aux[i]-K
                aux[j]=aux[j]+K    
                K=0
            else:
                tmp=aux[i]
                aux[i]=0
                aux[j]=aux[j]+tmp
                K=K-tmp
        else:
            i=i+1
    
    aux=list(map(str,aux))
    print(" ".join(aux))

    




T=int(input().strip())
for _ in range(1, T+1):
    N,K=input().split(" ")
    N=int(N)
    K=int(K)
    ent=list(map(int,input().split(" ")))
    solve(ent,K)
