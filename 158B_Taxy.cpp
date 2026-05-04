#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t = 0, temp;
    cin>>t;
    unordered_map<int, int> groups;
    
    for(int i = 0; i < t; ++i){
	cin>>temp;
	groups[temp]++;
    }
    
    int numTaxi = 0;
    numTaxi+=groups[4];
    numTaxi+=groups[3];
    if(groups[3]>groups[1]) groups[1]=0;
    else groups[1]-=groups[3];
    numTaxi+=groups[2]/2;
    if(groups[2]%2==0) groups[2]=0;
    else groups[2]=1;
    numTaxi+=groups[1]/4;
    groups[1]=groups[1]%4;
    //cout<<groups[1]<<"\n";
    if((groups[1]+2*groups[2])<=4 && (groups[1]+groups[2])>0) numTaxi+=1;
    else if (groups[1]+2*groups[2]==5)numTaxi+=2;

    cout<<numTaxi<<"\n";

    return 0;
}
