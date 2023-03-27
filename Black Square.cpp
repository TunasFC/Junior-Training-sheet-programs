//
// Created by ivani on 23/Aug/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="";
    int temp=0;
    vector<int> vect;
    for(int i=0; i<4;i++){
        cin>>temp;
        vect.push_back(temp);
    }
    cin>>s;
    temp=0;
    for(int i=0; i<s.size();i++){
        if(s[i]=='1'){
            temp+=vect[0];


        }else if(s[i]=='2'){
            temp+=vect[1];


        }else if(s[i]=='3'){
            temp+=vect[2];


        }else{
            temp+=vect[3];

        }
    }
    cout<<temp;
    return 0;
}
