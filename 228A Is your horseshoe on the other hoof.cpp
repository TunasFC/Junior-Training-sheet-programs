//
// Created by ivani on 6/26/2023.
//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    set <ll> shoes;
    ll s=0;
    for (int i = 0; i < 4; ++i) {
        cin>>s;
        shoes.insert(s);
    }
    cout<<4-shoes.size();
    return 0;
}