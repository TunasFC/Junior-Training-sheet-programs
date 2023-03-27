#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0, tw1=0, tw2=0, m1=0; 
	cin>>n;
	vector<int> moneda(n);
	for(int i=0;i<n;i++){
		cin>>moneda[i];
	}
	sort(moneda.rbegin(), moneda.rend());
	do{
		m1++;
		tw1=0;
		tw2=0;
		
		for(int i=0;i<m1;i++){
			tw1+=moneda[i];
		}
		for(int i=m1;i<n;i++){
			tw2+=moneda[i];
		}
	
	}while(tw1<=tw2);
	cout<<m1;
	return 0;
}
