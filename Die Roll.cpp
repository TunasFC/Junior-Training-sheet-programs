//
// Created by ivani on 30/Aug/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=0, y=0;
    cin>>x>>y;
    string prob[6]={"1/6", "1/3","1/2","2/3","5/6","1/1"};
    x=max(x,y);
    cout<<prob[6-x];
}

