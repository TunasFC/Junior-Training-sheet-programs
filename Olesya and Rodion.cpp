//
// Created by ivani on 5/22/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0, t=0;
    cin>>n>>t;
    if(n==1 && t==10) {
        cout<<"-1";
        return 0;
    }
    if(t==10) --n;
    cout<<t;
    for (int i = 0; i < n-1; ++i) {
        cout<<"0";
    }
    return 0;
}