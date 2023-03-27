//
// Created by ivani on 8/12/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int lr=0, counter, flag=1;
    string name; cin>>name;
    for(int i=0; i<name.size();i++){
        for(int j=i+1;j<name.size();j++){
            if(name[i]==name[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            counter++;
        }
        flag=1;
    }

    if((counter%2)!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }




    return 0;
}
