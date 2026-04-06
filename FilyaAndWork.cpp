#include <set>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    set<int> numeros;

    int t = 0, num = 0;

    cin>>t;
    
    for (int i = 0; i < t; ++i) {
	cin>>num;
	numeros.insert(num);
    }

    if(numeros.size()<=2) cout<<"YES\n";
    else if (numeros.size()==3) {
    
	set<int>::iterator itr;
	vector<int> tresNum;

	for(itr = numeros.begin(); itr != numeros.end(); itr++){
	    tresNum.push_back(*itr);
	}

	if((tresNum[1] - tresNum[0])==(tresNum[2]-tresNum[1])) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";

    }else cout<<"NO"<<"\n";
    


    
    
    return 0;
    
}
