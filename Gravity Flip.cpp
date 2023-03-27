//
// Created by ivani on 8/12/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, num=0, aux=0; cin>>n;
    vector<int> vect;

    for(int i=0;i<n;i++){
        cin>>num;
        vect.push_back(num);
    }

    sort(vect.begin(),vect.end());

    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
}