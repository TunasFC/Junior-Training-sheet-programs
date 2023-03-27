//
// Created by ivani on 18/Aug/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, crim=0, numPol=0;
    cin>>n;
    vector<int> ev;
    for(int i=0; i<n;i++){
        cin>>crim;
        ev.push_back(crim);

    }
    crim=0;
    for(int i=0; i<n;i++){
        if(ev[i]==-1 && numPol==0){
            crim++;
        }else if(ev[i]>0){
            numPol+=ev[i];
        }else if(ev[i]==-1 && numPol>0){
            numPol--;
        }
    }
    cout<<crim;
