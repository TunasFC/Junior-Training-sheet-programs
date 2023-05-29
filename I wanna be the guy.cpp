//
// Created by ivani on 5/19/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> levels;
    int n=0, aux=0, x=0, y=0;
    cin>>n>>x;

    for (int i = 0; i < x; ++i) {
        cin>>aux;
        levels.insert(aux);
    }
    cin>>y;
    for (int i = 0  ; i < y; ++i) {
        cin>>aux;
        levels.insert(aux);
    }
    if(levels.size()<n){
        cout<<"Oh, my keyboard!";
    }else{
        cout<<"I become the guy.";
    }
    return 0;

}