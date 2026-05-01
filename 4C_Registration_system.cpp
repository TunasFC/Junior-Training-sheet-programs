#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> users;
    int numberUsers = 0;
    string userName;

    cin>>numberUsers;

    for(int i = 0; i < numberUsers; ++i){
	cin>>userName;
	if(users.find(userName)==users.end()){
	    cout<<"OK\n";
	    users[userName]=1;
	}else{
	    cout<<userName<<users[userName]<<"\n";
	    users[userName]++;
	}
    }
    return 0;
}
