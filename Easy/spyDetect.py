

def solve(ent):

    values=list(set(ent))
    val=None
    if ent.count(values[0])>ent.count(values[1]):
        val=values[1]
    else:
        val=values[0]
    
    print(ent.index(val)+1)




T=int(input().strip())
for i in range(1, T+1):
    N=int(input().strip())
    ent=list(map(int,input().split(" ")))
    solve(ent)