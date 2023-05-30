//
// Created by ivani on 30/May/2023.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    bool flag=true;
    cin>>n;
    unordered_map<char, int> icons;
    char corner='0';
    string fila;
    for (int i = 0; i < n; ++i) {
        vector<char> row(n);
        cin>>fila;
        for (int j = 0; j < n; ++j) {
            row[j]=fila[j];
            if(icons.count(row[j])==0) icons.insert({row[j], 1});
            else ++icons[row[j]];
        }
        if(i==0){
            corner=row[0];
            icons.insert({row[0], 1});
        }


        if(row[i]!=corner || row[n-i-1]!=corner)    flag=false;

    }

    if(icons.size()!=2) flag = false;

    int cont=0;
    for (auto itr = icons.begin(); itr != icons.end(); ++itr) {
        if(itr->second==2*(n-1)+1) ++cont;
    }

    if(cont!=1) flag = false;



    if(flag) cout<<"YES";
    else cout<<"NO";

    return 0;

}