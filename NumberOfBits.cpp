#include <iostream>

using namespace std;

int main(){
    int n = 0, c = 0;
    cin>>n;
    while (n>=1){
	//cout<<n%2<<" "<<n<<"\n";

	if(n%2==1){
	    c++;
	}
	n = n/2;
    }
    cout<<c<<"\n";


}
