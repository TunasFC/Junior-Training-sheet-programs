#include <iostream>
using namespace std;

int main(){

    int t = 0, v = 0, d = 0, n = 0, n1 = 0, n2 = 0; 
    
    cin>>t;
    for(int i = 0; i < t; ++i){
	cin>>n>>v;
	for (int j = 0; j < n; ++j) {
	    cin>>d;
	    if(d>=n1){
		n2 = n1;
		n1 = d;
	    }else if (d>n2) n2 = d;
	    
	}
	int c = 0;
	//cout<<v<<" "<<(n1+n2)<<"\n";
	c = v/(n1+n2);
	c = c*2;
	v = v%(n1+n2);
	if(v>0){
	    v = v - n1;
	    c++;
	    if(v>0){
		c++;
	    }
	}
	cout<<c<<"\n";
	n1 = 0;
	n2 = 0;
    }
   
    return 0;
}


