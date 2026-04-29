#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ll n = 0, k = 0;
    int t;
    cin>>t;
    for(int i = 0; i < t; ++i){
	cin>>n>>k;
	if(n%2==k%2 && k*k<=n) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
    }
}
   
