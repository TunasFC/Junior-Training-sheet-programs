//
// Created by ivani on 8/10/2022.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int mat[5][5], f=0, c=0;
    for(int i=0; i<5;i++){
        for(int j=0; j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                f=i-2;
                c=j-2;
            }
        }
    }
    cout<<abs(f)+abs(c);

    return 0;
}
