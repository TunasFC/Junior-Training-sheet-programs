//
// Created by ivani on 8/10/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0; cin>>a;
    int b=0; cin>>b;
    int year=0;
    while(a<=b){
        a*=3;
        b*=2;
        year++;
    }
    cout<<year;
    return 0;
}