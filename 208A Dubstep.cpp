//
// Created by ivani on 5/29/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    string remix, original;
    cin>>remix;

    for (int i = 0; i < remix.size(); ++i) {
          if(remix[i]=='W' && remix[i+1]=='U' && remix[i+2]=='B'){
              if(original.size()>0){
                  if(original[original.size()-1]!=' ') original+=' ';
              }
              i+=2;
          }else{
              original+=remix[i];
          }
    }
   cout<<original;
    return 0;
}