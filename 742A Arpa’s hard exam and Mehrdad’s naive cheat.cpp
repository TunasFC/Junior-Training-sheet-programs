//
// Created by ivani on 5/30/2023.
//

#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    if (n%2==0){
        if(((n/2))%2==0){
            cout<<"6";
        }else{
            cout<<"4";
        }
    }else{
        if(((n+1)/2)%2==0){
            cout<<"2";
        }else{
            cout<<"8";
        }
    }
    return 0;
}
