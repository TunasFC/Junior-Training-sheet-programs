//
// Created by ivani on 7/12/2023.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n=0;
    cin>>n;
    if(n%2==0){
        cout<<n/2;
    }else{
        n+=1;
        n/=-2;
        cout<<n;
    }
    return 0;

}