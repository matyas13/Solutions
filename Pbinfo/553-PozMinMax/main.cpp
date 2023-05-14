#include <iostream>

using namespace std;

int main(){
   int n, x, imin, imax, maxi=0, mini=1001;
   cin >> n;
   for(int i=1; i<=n; i++){
      cin >> x;
      if(x>maxi){
         imax=i;
         maxi=x;
      }

      if(x<mini){
         imin=i;
         mini=x;
      }
   }
   cout << imin << ' ' << imax;
   return 0;
}
