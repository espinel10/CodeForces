#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b){
    if(b==0){return a;}
    return gcd(b,a%b);
}

ll LCM(ll x,ll y){
return (x*y)/gcd(x,y);
}

void solve(){
ll M=1000000000+7;
ll N;cin>>N;
ll G=1;
ll ans=0;
for(int i=1;G<=N;i++){
G=LCM(G,i);
if(G>N)break;
ans+=N/G;
}
cout<<(ans+N)%M<<"\n";
}





int main(){
    int T;cin>>T;
    for(int t=0;t<T;t++){
        solve();
    }
   
}

