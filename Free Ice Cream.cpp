//
// Created by ivani on 8/Sep/2022.
//

#include <bits/stdc++.h>
#define PB push_back
#define MK make_pair
#define F first
#define S second
#define ll long long
using namespace std;
int main(){
    char signo;
    ll  n=0, cont=0, d=0, depre=0;
    vector<pair<char,long long> > helados;

    cin>>n>>d;
    helados.PB(MK('+',d));
    for(int i=0; i<n;i++){
        cin>>signo>>depre;
        helados.PB(MK(signo, depre));
    }
    cont=0;
    depre=0;
    for(int i=0; i<n+1; i++){
        if(helados[i].F=='+'){
            cont+=helados[i].S;
        }else if(helados[i].F=='-' && cont>=helados[i].S){
            cont-=helados[i].S;
        }else{
            depre++;
        }
    }
    cout<<cont<<" "<<depre;
    return 0;
}
