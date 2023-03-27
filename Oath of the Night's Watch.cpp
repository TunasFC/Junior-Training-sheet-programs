//
// Created by ivani on 29/Sep/2022.
//

#include <bits/stdc++.h>
#define PB push_back
#define MK make_pair
#define S second
#define F first
#define ll long long
using namespace std;
int main(){
    int n=0, cont=0, min=0, max=0; cin>>n;
    vector<ll> datos(n);
    vector<pair<ll,ll> > pares;
    for(int i=0;i<n;i++){
        cin>>datos[i];

    }
    sort(datos.begin(),datos.end());

    min=datos[0];
    max=datos[n-1];

    for(int i=0;i<n;i++){
        if(datos[i]!=min && datos[i]!=max){
            cont++;
        }
    }
    cout<<cont;

    return 0;
}
