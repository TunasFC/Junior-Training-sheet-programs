//
// Created by ivani on 5/22/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    set<char> letras;
    string cadena;
    vector<int> juan(4);

    cin>>cadena;
    for (int i = 0; i < cadena.size(); ++i) {
        letras.insert(cadena[i]);
    }
    if(letras.size()%2!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    for(auto i : letras){
        cout<<i;
    }
    return 0;
}
