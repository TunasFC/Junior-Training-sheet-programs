//
// Created by ivani on 25/Aug/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp=0, cont=0;
    vector<int> n;
    for(int i=0; i<4; i++){
        cin>>temp;
        n.push_back(temp);
    }
    sort(n.begin(), n.end());

    for(int i=0; i<3;i++){
        if(n[i]==n[i+1]){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
