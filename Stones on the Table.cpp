//
// Created by ivani on 18/Aug/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont=0, n=0; cin>>n;
    string piedra=""; cin>>piedra;
    for(int i=0; i<n-1;i++){
        if(piedra[i]==piedra[i+1]){
            cont++;
        }
    }
    cout<<cont;
}