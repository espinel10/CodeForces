#include <bits/stdc++.h>

/*
https://codeforces.com/problemset/problem/50/A
Nagatomo 
*/
using namespace std;

int main() {
    vector<int> arr;
    string entrada;
    cin >> entrada;

    for(int i = 0 ; i < entrada.length(); i = i+2){
        arr.push_back(entrada[i] - 48);
    }
    sort(arr.begin(),arr.end());

    for(int i = 0 ; i < arr.size() - 1; i++){
       cout<<arr[i]<<"+";
    }
    cout<<arr[arr.size()-1]<<"\n";
}
