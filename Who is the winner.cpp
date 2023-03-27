#include <bits/stdc++.h>
#define PB push_back

using namespace std;

int main(){
    int t=0, s=0, p=0, n=0;
    string nombretemp;
    cin>>t;
    vector<string> nombre;
    vector<pair<int,int> > puntuacion;
    vector<string> ganadores;

    for (int i = 0; i < t; ++i)
    {
        cin>>n;
        for (int j = 0; j < n; ++j)
        {
            cin>>nombretemp>>s>>p;
            nombre.push_back(nombretemp);

            puntuacion.push_back(make_pair(s,p));
            /* code */
        }
        int mejor=0;

        for (int i = 1; i < n; i++)
        {
            if(puntuacion[mejor].first<puntuacion[i].first){
                mejor=i;
            }else if(puntuacion[mejor].first==puntuacion[i].first){
                if(puntuacion[mejor].second>puntuacion[i].second){
                    mejor=i;
                }
            }
            /* code */
        }
        ganadores.push_back(nombre[mejor]);
        nombre.clear();
        puntuacion.clear();




        /* code */
    }
    for (int i = 0; i < ganadores.size(); i++)
    {
        if (i==ganadores.size()-1){
            cout<<ganadores[i];
        }else{
            cout<<ganadores[i]<<"\n";
        }


        /* code */
    }


    return 0;



}
