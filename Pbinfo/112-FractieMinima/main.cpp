#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int n, mini, maxi, x;
   cin >> n >> x;
   maxi=mini=x;
   for(int i=1; i<n; i++){
      cin >> x;
      mini=min(mini, x);
      maxi=max(maxi, x);
   }
   int lnko=gcd(mini, maxi);
   cout << mini/lnko << '/' << maxi/lnko;
   return 0;
}
