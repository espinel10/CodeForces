#include <bits/stdc++.h>

/*
https://codeforces.com/problemset/problem/50/A
Nagatomo 
*/
using namespace std;

int main() {
    
    int mT = 0;
        int M,N;
        cin>>M>>N;
        mT = (M/2) * N ;
        if(!(M%2==0)){
        mT = mT + N/2;
        }
       cout<<mT<<"\n";
}
