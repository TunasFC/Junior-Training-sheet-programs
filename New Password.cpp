//
// Created by ivani on 27/Sep/2023.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, k=0; cin>>n>>k;
    char contra=97;
    for(int i=0;i<n;i++){
        cout<<contra;
        contra++;
        if(contra-97==k){
            contra=97;

        }

    }
    return 0;
}
