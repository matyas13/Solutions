#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int n, x, y;
   cin >> n >> x;
   for(int i=1; i<n; i++){
      cin >> y;
      x=gcd(x, y);
   }
   cout << x;
   return 0;
}
