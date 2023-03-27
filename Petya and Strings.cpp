//
// Created by ivani on 8/12/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1=""; cin>>s1;
    string s2=""; cin>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    vector<char> palabra1;
    vector<char> palabra2;

    for(int i=0;i<s1.size();i++){
        palabra1.push_back(s1[i]);
        palabra2.push_back(s2[i]);
    }

    for(int i=0;i<s1.size();i++){
        if(int(palabra1[i])<int(palabra2[i])){
            cout<<"-1";
            return 0;
        }if( int(palabra2[i]) < int(palabra1[i]) ){
            cout<<"1";
            return 0;
        }

    }

    cout<<"0";
    return 0;


}
