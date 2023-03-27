
//
// Created by ivani on 3/27/2023.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,h=0,ai=0,ttl=0;
    cin>>n;
    cin>>h;
    cout<<"\n";
    for(int i=0;i<n;i++){
        cin>>ai;
        if(ai<=h){
            ttl++;

        }else{
            ttl+=2;
        }
    }
    cout<<"\n";
    cout<<ttl;
}