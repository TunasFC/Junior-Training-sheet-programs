//
// Created by ivani on 17/Aug/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, cn=0, s=0, d=0 ; cin>>n;
    int cont=n-1;
    bool flag=true;
    vector<int> vect;
    for(int i=0; i<n;i++){
        cin>>cn;
        vect.push_back(cn);
    }
    cn=0;
    for(int i=0; i<n;i++){
        if(flag==true){
            if(vect[cn]>vect[cont]){
                s+=vect[cn];
                cn++;
                flag=false;
            }else{
                s+=vect[cont];
                cont--;
                flag=false;
            }
        }else{
            if(vect[cn]>vect[cont]){
                d+=vect[cn];
                cn++;
                flag=true;
            }else{
                d+=vect[cont];
                cont--;
            }	flag=true;
        }
    }
    cout<<s<<" "<<d;


}