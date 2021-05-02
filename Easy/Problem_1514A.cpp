/////A. Perfectly Imperfect Array
////https://codeforces.com/problemset/problem/1514/A
#include<bits/stdc++.h>
#include <math.h>
#include <string.h>

using namespace std;
int main(){


  int t;
    cin>>t;
    int test=t;
    while(t--)
    {
        string sol="NO";
        int n;
        int aux,root;
        cin>>n;
        for(int i=0;i<n;i++)
        { 
        cin>>aux;   
        root=sqrt(aux);
        if((root*root)!=aux){
            sol="YES";
        }
        
        }

        cout<<sol<<endl;

    }

    return 0;
}



