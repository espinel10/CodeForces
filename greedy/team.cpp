#include <bits/stdc++.h>

/*
https://codeforces.com/problemset/problem/231/A

nagatomo
*/
using namespace std;

int main() {
    int N;
    int cont = 0;
    cin >> N;

    for(int i=0;i<N; i++){
        int P,V,T;
        cin>>P>>V>>T;
        if(P+V+T > 1){
            cont++;
        }
    }
    cout<<cont<<"\n";
}
