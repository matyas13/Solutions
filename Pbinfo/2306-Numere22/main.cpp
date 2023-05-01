#include <iostream>

using namespace std;

int main(){
   int p, q, n;
   cin >> p >> q >> n;
   int x, nrp=0, nrq=0;
   for(int i=0; i<n; i++){
      cin >> x;
      while(x%p==0){
         nrp++;
         x/=p;
      }
      while(x%q==0){
         nrq++;
         x/=q;
      }
   }
   cout << min(nrp, nrq);
   return 0;
}
