//
// Created by ivani on 30/Aug/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, temp=0, x=0, y=0;
    vector<int> cables;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>x;
        cables.push_back(x);
    }
    cin>>temp;
    vector<pair<int,int> > cords;
    for(int i=0;i<temp;i++){
        cin>>x>>y;
        cords.push_back(make_pair(x,y));
    }

    for(int i=0; i<temp;i++){
        if(cords[i].first==1){
            cables[cords[i].first]+=cables[cords[i].first-1]-cords[i].second;
            cables[cords[i].first-1]=0;
        }else if(cords[i].first==n){
            cables[cords[i].first-2]+=cords[i].second-1;
            cables[cords[i].first-1]=0;
        }else{
            cables[cords[i].first]+=cables[cords[i].first-1]-cords[i].second;
            cables[cords[i].first-2]+=cords[i].second-1;
            cables[cords[i].first-1]=0;

        }
    }
    for(int i=0;i<n;i++){
        cout<<cables[i]<<"\n";
    }
    return 0;

}
