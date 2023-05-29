//
// Created by ivani on 5/22/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1=0, a2=0, b1=0, b2=0, n=0;
    bool rated=false, unrated=false, maybe=false;
    cin>>n;
    cin>>a1>>a2;
    for (int i = 0; i < n-1; ++i) {
        cin>>b1>>b2;
        if(a1!=a2 || b1!=b2){
            rated=true;

        }else if(a1<b1){
            unrated=true;

        }
        a1=b1;
        a2=b2;
    }
    if(rated){
        cout<<"rated";
        return 0;
    }else if(unrated){
        cout<<"unrated";
    }else{
        cout<<"maybe";
    }


    return 0;
}

