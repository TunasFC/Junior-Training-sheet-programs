//
// Created by ivani on 27/Sep/2023.
//

#include <bits/stdc++.h>
#define PB push_back
#define F first
#define S second
#define MK make_pair
using namespace std;
int main(){
    int n=0, temp=0,p=0, m=0, s=0, min=0;
    cin>>n;
    vector<pair<int,int> > alumnos;
    for(int i=0;i<n;i++){
        cin>>temp;
        alumnos.PB(MK(temp,i+1));
    }
    sort(alumnos.begin(), alumnos.end());
    for(int i=0; i<n;i++){
        if(alumnos[i].F==1){
            p++;
        }else if(alumnos[i].F==2){
            m++;
        }else{
            s++;
        }

    }
    min=p;
    if(m<min){
        min=m;
    }
    if(s<min){
        min=s;
    }

    if(p==0 || m==0 || s==0){

        cout<<"0";
        return 0;
    }

    cout<<min<<"\n";

    for(int i=0; i<min;i++){
        temp=i;
        cout<<alumnos[temp].S<<" ";
        temp+=p;
        cout<<alumnos[temp].S<<" ";
        temp+=m;
        cout<<alumnos[temp].S;
        cout<<"\n";

    }

    return 0;

}
