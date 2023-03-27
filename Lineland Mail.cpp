//
// Created by ivani on 28/Sep/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0; cin>>n;
    vector<int> dist(n);
    for(int i=0;i<n;i++){
        cin>>dist[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<abs(dist[i]-dist[i+1])<<" "<<abs(dist[i]-dist[n-1])<<"\n";
        }else if(i<n-1){
            if(abs(dist[i]-dist[i-1])<abs(dist[i]-dist[i+1])){
                cout<<abs(dist[i]-dist[i-1])<<" ";
            }else{
                cout<<abs(dist[i]-dist[i+1])<<" ";
            }
            if(abs(dist[0]-dist[i])>abs(dist[n-1]-dist[i])){
                cout<<abs(dist[0]-dist[i])<<"\n";
            }else{
                cout<<abs(dist[n-1]-dist[i])<<"\n";

            }
        }else{
            cout<<abs(dist[i]-dist[i-1])<<" "<<abs(dist[i]-dist[0]);
        }
    }

    return 0;
}
