//
// Created by ivani on 17/Aug/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, pz=0, grp=0; cin>>n;
    vector<int> vect;
    for(int i=0; i<n;i++){
        cin>>pz;
        vect.push_back(pz);
    }
    for(int i=0; i<n-1;i++){
        if(vect[i]!=vect[i+1]){
            grp++;
        }
    }
    grp++;
    cout<<grp;
}
