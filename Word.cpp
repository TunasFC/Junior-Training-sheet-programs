//
// Created by ivani on 8/17/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont=0;
    string word=""; cin>>word;
    for(int i=0; i<word.size();i++){
        if(isupper(word[i])){
            cont++;
        }
    }
    if(cont>(word.size()/2)){
        transform(word.begin(), word.end(), word.begin(), ::toupper);


    }else{
        transform(word.begin(), word.end(), word.begin(), ::tolower);

    }
    cout<<word;
}
