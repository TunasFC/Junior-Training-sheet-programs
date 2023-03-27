//
// Created by ivani on 29/Sep/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    string a="",b="";
    cin>>a;
    cin>>b;
    if(a==b){
        cout<<"-1";

    }else if(a.size()>b.size()){
        cout<<a.size();
    }else{
        cout<<b.size();

    }
    return 0;
}
