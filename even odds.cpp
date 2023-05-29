//
// Created by ivani on 5/19/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int  x=1, r=0;
    long long n=0, k=0;
    cin>>n>>k;

    if(n%2!=0){
        r=1;
    }

    if(k<=(n/2)+r){
        cout<<k*2-1;
    }else{
        cout<<(k-((n/2)+r))*2;
    }



    return 0;
}