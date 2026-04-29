#include <ios>
#include <iterator>
#include <set>
#include <iostream>
#include <vector> 
#include <iomanip>

using namespace std;

int main(){

   double n = 0, l = 0, temp = 0;
   set<double> lanterns;
   
   cin>>n>>l;
   for (double i = 0; i < n; ++i) {
	cin>>temp;
	lanterns.insert(temp);
   }
   set<double>::iterator itr;
   vector<double> orderedLanterns;
   for(itr = lanterns.begin(); itr != lanterns.end(); itr++){
       orderedLanterns.push_back(*itr);
   }
   double lamp1 = 0, lamp2 = 0, majorDistance = 0;
   for(double i = 0; i < size(orderedLanterns) - 1; ++i){
       lamp1 = orderedLanterns[i];
       lamp2 = orderedLanterns[i+1];
	if (majorDistance<(lamp2-lamp1)) {
	    majorDistance=lamp2-lamp1;
	}
   }
   double majorRadiousBtwLamps = majorDistance/2.0, radiousFrstLamp = orderedLanterns[0];
   double radiousLstLamp = l - orderedLanterns[size(orderedLanterns)-1];

   if(majorRadiousBtwLamps > radiousFrstLamp && majorRadiousBtwLamps > radiousLstLamp) cout<<fixed<<setprecision(9)<<majorRadiousBtwLamps<<"\n";
   else if (radiousFrstLamp> majorRadiousBtwLamps && radiousFrstLamp>radiousLstLamp) cout<<fixed<<setprecision(9)<<radiousFrstLamp<<"\n";
   else cout<<fixed<<setprecision(9)<<radiousLstLamp<<"\n";

   

    return 0;
}
