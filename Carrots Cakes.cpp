//
// Created by ivani on 26/Aug/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int min=0, cont2=-1, n=0, t=0, k=0, d=0, pasteles=0,cont=0, min2=0;
    cin>>n;
    cin>>t;
    cin>>k;
    cin>>d;
    while(pasteles<n){
        min++;

        cont++;
        if(min>=d){
            cont2++;
        }
        if(cont==t){
            cont=0;
            pasteles+=k;
        }
        if(cont2==t){
            cont2=0;
            pasteles+=k;
        }
    }
    if(n%k!=0){
        min2=(n/k)+1;
        min2*=t;
    }else{
        min2=n/k;
        min2*=t;
    }
    if(min<min2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }



    return 0;




}
