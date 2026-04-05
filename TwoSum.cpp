#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vector = {2, 7, 11, 15};
    int num = 22, n1 = 0, n2 = 0;
    for(int i = 0; i < size(vector) - 1; i++){
	for(int j = i + 1; j < size(vector); j ++){
	    n1 = vector[i];
	    n2 = vector[j];
	    if ((num - n1 - n2) == 0) {
		cout<<i<<" "<<j<<""<<"\n";
	    }
	}
    }
    return 0;
}
