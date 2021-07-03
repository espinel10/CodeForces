#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;

    for(int t=0;t<T;t++){
     int pares=0;
     int inpares=0;
     int A;cin>>A;
     for(int a=0;a<2*A;a++){
         int num;cin>>num;
         if(num%2==0){pares++;}else{inpares++;}
     }

     if(pares==inpares){cout<<"Yes"<<"\n";}else{cout<<"No"<<"\n";}   

    }
    return 0;
}

