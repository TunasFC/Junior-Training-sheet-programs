//
// Created by ivani on 8/10/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, p=0, v=0, t=0;
    int pi=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        cin>>v;
        cin>>t;
        if((p+v+t)>=2){
            pi++;
        }
    }
    cout<<pi;
    return 0;
}