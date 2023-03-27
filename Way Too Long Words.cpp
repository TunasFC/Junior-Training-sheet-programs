//
// Created by ivani on 3/Sep/2023.
//

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MK make_pair
#define F first
#define S second
int main(){
    int n=0,temp=0; cin>>n;
    string a="",p="";
    vector<string> cadena;
    for(int i=0;i<n;i++){
        cin>>a;
        cadena.PB(a);
    }
    for(int i=0;i<n; i++){
        if(cadena[i].size()>10){
            p=cadena[i];
            temp=cadena[i].size()-2;
            cout<<p[0]<<temp<<p[p.size()-1]<<"\n";
        }else{
            cout<<cadena[i]<<"\n";
        }
    }
    return 0;
}