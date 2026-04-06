#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t = 0, a = 0, b = 0, c =0, d = 0;
    vector<int> distances;
    cin>>t;
    for(int i = 0; i < t; i++){
	distances.push_back(0);
	cin>>a>>b>>c>>d;
	if(a < b){
	    distances[i]++;
	}
	if (a < c) {
	    distances[i]++;
	}
    
	if (a < d) {
	    distances[i]++;	
	}
    }
    for(int i =0; i<t; i++){
	cout<<distances[i]<<"\n";
    }
    return 0;
}
