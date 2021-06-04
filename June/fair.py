#####https://codeforces.com/contest/1535/problem/0

def solve(ent):
    A=[max(ent[0],ent[1]),max(ent[2],ent[3])]
    i=max(ent)
    ent.remove(i)
    j=max(ent)
    B=[i,j]
    C=[j,i]
    if A==B or A==C:
        print("YES")
    else:
        print("NO")


T=int(input().strip())
for  t  in range(T):
    ent=list(map(int,input().split(" ")))
    solve(ent)
