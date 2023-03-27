//
// Created by ivani on 28/Sep/2022.
//

#include <bits/stdc++.h>
#define PB push_back
#define S second
#define MK make_pair
using namespace std;
int main(){
    int n=0, temp=0; cin>>n;
    vector<pair<int,int> > regalo;
    for(int i=0; i<n;i++){
        cin>>temp;
        regalo.PB(MK(temp,i+1));

    }
    sort(regalo.begin(),regalo.end());
    for(int i=0; i<n;i++){
        cout<<regalo[i].S<<" ";
    }
    return 0;
}