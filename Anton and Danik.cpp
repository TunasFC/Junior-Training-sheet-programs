//
// Created by ivani on 8/10/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int gp=0,wa=0,wd=0;
    string s;
    cin>>gp;
    cin>>s;

    for(int i=0;i<gp;i++){
        if(s[i]=='A'){
            wa++;
        }else {
            wd++;
        }
    }
    if(wa>wd){
        cout<<"Anton";
    }else if(wd>wa){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}