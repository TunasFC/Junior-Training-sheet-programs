//
// Created by ivani on 25/Aug/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k=0, r=0, cont=1, temp=0;
    cin>>k;
    cin>>r;
    temp=k;
    for(int i=0;i<9;i++){
        if(k%10==0 || (k-r)%10==0 ){
            cout<<cont;
            return 0;
        }else{
            k+=temp;
            cont++;
        }
    }

    return 0;
}
