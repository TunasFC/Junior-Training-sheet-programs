//
// Created by ivani on 25/Aug/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n=0,temp=0;
    cin>>n;
    vector<int> home;
    vector<int> guest;
    for(int i=0;i<n; i++){
        cin>>temp;
        home.push_back(temp);
        cin>>temp;
        guest.push_back(temp);
    }

    temp=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i!=j && home[i]==guest[j]){
                temp++;


            }
        }
    }
    cout<<temp;
    return 0;
}
