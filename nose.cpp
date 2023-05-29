//
// Created by ivani on 5/22/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0, x=0, y=0, aux=0;
    cin>>n;
    set<int> number;
    cin>>x;
    for (int i = 0; i < x; ++i) {
        cin>>aux;
        number.insert(aux);
    }
    for(auto i : number) cout<<i<<" ";
}