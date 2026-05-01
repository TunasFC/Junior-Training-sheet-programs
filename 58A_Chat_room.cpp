#include <iostream>
#include <iterator>

using namespace std;

int main(){
    string correctWord = "hello", userWord = "";
    int cont = 0;
    cin>>userWord;
    for(int i = 0; i < size(userWord); i++){
	if(userWord[i]==correctWord[cont]) ++cont;
    }
    if(cont==5) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}
