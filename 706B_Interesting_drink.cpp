#include <algorithm>
#include <ios>
#include <iostream>
#include <iterator>
#include <vector>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0, price = 0;
    cin>>n;
    vector<ll> prices;

    for(int i = 0; i < n; ++i){
	cin>>price;
	prices.push_back(price);
    }
    sort(prices.begin(), prices.end());
    
    int q = 0;
    ll coins = 0;
    cin>>q;
    for(int i = 0; i < q; ++i){
	cin>>coins;
	vector<ll>::iterator itr = upper_bound(prices.begin(), prices.end(), coins);
	if(itr==prices.begin()) cout<<"0\n";
	else{
	    --itr;
	    int index = distance(prices.begin(), itr);
	    cout<<index+1<<"\n";

	}
	
    }
    

    //cout<<prices[0]<<" "<<prices[size(prices)-1]<<"\n";

    return 0;
}
