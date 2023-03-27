//
// Created by ivani on 1/Sep/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, b=0, d=0, temp=0,cont=0;
    cin>>n>>b>>d;

    vector<int> naranjas;
    for(int i=0;i<n;i++){
        cin>>temp;
        naranjas.push_back(temp);
    }
    temp=0;
    for(int i=0; i<n;i++){
        if(naranjas[i]<=b){
            temp+=naranjas[i];
        }
        if(temp>d){
            temp=0;
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
