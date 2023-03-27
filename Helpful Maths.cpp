//
// Created by ivani on 8/Sep/2022.
//

#include <bits/stdc++.h>
#define PB push_back
using namespace std;
int main(){

    vector<char> cadena;
    vector<int> vec;
    string s=""; cin>>s;
    int num=0;
    char temp;
    for(int i=0; i<s.size();i++){
        cadena.PB(s[i]);
        if(cadena[i]!='+'){
            vec.PB(cadena[i]-48);
        }

    }
    sort(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++){
        if(i<vec.size()-1){
            cout<<vec[i]<<"+";
        }else{
            cout<<vec[i];
        }

    }
    return 0;
}
