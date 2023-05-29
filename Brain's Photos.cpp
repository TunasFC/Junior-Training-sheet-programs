//
// Created by ivani on 5/29/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    set<char> pixels;
    int n=0,m=0;
    bool flag = false;
    char aux;
    cin>>n>>m;
    for (int i = 0; i < n*m; ++i) {
        cin>>aux;
        pixels.insert(aux);
    }

    for(auto pix : pixels){
        if(pix == 'C' || pix == 'M' || pix == 'Y') flag =true;
    }
    if(!flag){
        cout<<"#Black&White \n";
    }else cout<<"#Color\n";
}