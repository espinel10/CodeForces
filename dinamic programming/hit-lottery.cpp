#include <bits/stdc++.h>

/*
https://codeforces.com/problemset/problem/50/A
Nagatomo 
*/
typedef long long int ll;

using namespace std;

void Solve(){
    int n ; cin>>n;
    string entrada;
    cin>>entrada;
    int mid = n/2;
    int c2,c1;
    c2 = 0;
    c1 =0;
    for (int i = 0; i < mid; i++)
    {
        if(entrada[i] != 'a') c1++;
    }

     for (int i = mid; i < n; i++)
    {
        if(entrada[i] != 'a') c2++;
    }

    cout<<min(c1,c2)<<"\n";
    
}

int main() {

 int t; scanf("%d", &t);
    while (t--) Solve();

}
