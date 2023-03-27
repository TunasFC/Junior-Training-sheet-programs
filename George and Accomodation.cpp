//
// Created by ivani on 3/17/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,a=0,b=0, c=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a>>b;
        if(b-a>=2) ++c;
    }
    cout<<c;
    return 0;
}