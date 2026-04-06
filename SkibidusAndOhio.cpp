#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t = 0;
    vector<string> cases;
    string temp = "";
    cin>>t;
    for(int i=0; i < t; i++){
	cin>>temp;
	cases.push_back(temp);
    }
    
    for (int i = 0; i < t; i++) {
	for(int j = 0; j < size(cases[i]) - 1; j++){
	    if(cases[i][j]==cases[i][j+1] && j == 0){
		cases[i].erase(j+1, 1);
		cases[i][j] = cases[i][j+1];
		j=-1;
	    }else if (cases[i][j]==cases[i][j+1]) {
		cases[i].erase(j+1, 1);
		cases[i][j]=cases[i][j-1];
		j=-1;
	    }

	    }

	
	cout<<size(cases[i])<<"\n";
    }
    return 0;
}
