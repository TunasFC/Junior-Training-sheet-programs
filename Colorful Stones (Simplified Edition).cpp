//
// Created by ivani on 25/Aug/2023.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="", ins="";
    int cont=1, step=0;
    cin>>s;
    cin>>ins;
    for(int i=0;i<ins.size();i++){
        if(s[step]==ins[i]){
            cont++;
            step++;
        }
    }
    cout<<cont;
    return 0;
}