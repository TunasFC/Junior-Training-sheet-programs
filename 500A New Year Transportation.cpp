//
// Created by ivani on 7/12/2023.
//

#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int,int> portales;
    set<int> ruta;
    ruta.insert(1);
    int n=0, d=0, temp=0, pos=1;
    cin>>n>>d;
    for (int i = 1; i < n; ++i) {
        cin>>temp;
        portales[i]=temp+i;
    }
    while(portales[pos]!=n){
        ruta.insert(portales[pos]);
        pos=portales[pos];
    }
    ruta.insert(n);
    auto it = ruta.find(d);
    if (it != ruta.end()) {
        cout <<"YES";
    } else {
        cout <<"NO";
    }
    return 0;


}