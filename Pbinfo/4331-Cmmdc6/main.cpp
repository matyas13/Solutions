#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int n, x, mini, maxi;
   cin >> n >> x;
   mini=maxi=x;
   for(int i=1; i<n; i++){
      cin >> x;
      mini=min(mini, x);
      maxi=max(maxi, x);
   }
   cout << gcd(mini, maxi);
   return 0;
}
