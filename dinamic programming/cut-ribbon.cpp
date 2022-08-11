#include <bits/stdc++.h>

using namespace std;

void solve(int num,int a,int b,int c,vector<int> &dp,int &max_cut,int cont){
  if(dp[num]==1) return ;
  if(num==0){
    max_cut=max(max_cut,cont);
    return;
  }

  if(num<0) return;

  solve(num-a,a,b,c,dp,max_cut,cont+1);
  solve(num-b,a,b,c,dp,max_cut,cont+1);
  solve(num-c,a,b,c,dp,max_cut,cont+1);

  dp[num]=1;

}


int main() {
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  vector<int> e = { a,b,c};
  sort(e.begin(),e.end());
  a=e[0];b=e[1];c=e[2];
  int max_cut=INT_MIN;
  vector<int>dp(4002,-1);
  solve(n,a,b,c,dp,max_cut,0);
  cout<<max_cut<<"\n";
}
