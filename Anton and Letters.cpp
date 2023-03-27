//
// Created by ivani on 1/Sep/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    string cadena="";
    getline(cin, cadena);
    vector<char> caracter;
    vector<int> valor;
    int cont=1;
    if(cadena.size()==2){
        cout<<"0";
        return 0;
    }
    for(int i=1;i<cadena.size()-1;i+=3){
        caracter.push_back(cadena[i]);
    }

    for(int i=0;i<cadena.size()/3;i++){
        valor.push_back(caracter[i]);
    }
    sort(valor.begin(), valor.end());
    for(int i=0; i<(cadena.size()/3)-1;i++){
        if(valor[i]!=valor[i+1]){
            cont++;
        }
    }
    cout<<cont;

    return 0;

}
