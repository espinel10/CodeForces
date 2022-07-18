#include <bits/stdc++.h>

/*
https://codeforces.com/problemset/problem/1490/D
Nagatomo 
*/
using namespace std;


int partition(int d,int l,int r , int arr[] , int resp[]){
    int pi = 0;
    int mayor = -99999999;
    for (int i = l; i < r+1; i++)
    {
        if (mayor < arr[i])
        {
            mayor = arr[i];
            pi = i;
        }
    }
  resp[pi]=d;
  return pi;
}

void divideProblem(int d,int l,int r , int arr[] , int resp[]){
    if (l <= r)
    {   
        int pi = partition(d,l,r ,arr,resp);
        divideProblem(d+1,l,pi-1,arr,resp);
        divideProblem(d+1,pi+1,r,arr,resp);
    }
}


int main() {
    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {   
     int N;
     cin>>N;
     int arr[N];
     int resp[N];
     for (int j = 0; j < N; j++)
     {
         cin>>arr[j];
         resp[j]=0;
     }
     divideProblem(0,0,N-1,arr,resp);
    
     for (int j = 0; j < N; j++)
     {
         cout<<resp[j]<<" ";
     }
        cout<<"\n";
    }
}
