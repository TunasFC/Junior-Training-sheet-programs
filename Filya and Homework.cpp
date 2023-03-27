#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int n=0, cont=0, w=0;
	cin>>n;
	vector<ll> number(n);
	for(int i=0;i<n;i++){
		cin>>number[i];
		
	}
	sort(number.begin(), number.end());
	
	for(int i=0;i<n-1;i++){
		if(number[i]==number[i+1]){
			cont++;
		}
	}
	for(int i=1; i<n;i++){
		if(number[i]>number[0]){
			w=number[i];
			break;
		}
	}

	if(cont==number.size() || 2==n-cont || 2*w==(number[0]+number[number.size()-1]) ){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	
	return 0;
	
}
