//
// Created by ivani on 5/22/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> goles;
    string team;
    int n=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>team;
        if(goles.count(team)==0){
            goles.insert({team, 1});
        }else{
            goles[team]++;
        }
    }
    string teamMax=goles.begin()->first;
    int golMax=goles.begin()->second;
    for (auto itr = goles.begin(); itr != goles.end(); ++itr) {
        if(golMax<itr->second){
            golMax=itr->second;
            teamMax=itr->first;
        }

        //cout << itr->first<< '\t' << itr->second << '\n';
    }
    cout<<teamMax;
    return 0;
}