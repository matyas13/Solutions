#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int  n, cnt=0;
   cin >> n;
   for(int i=1; i<=n; i++){
      for(int j=i; j<=n; j++){
         if(gcd(i, j)==1){
            cnt++;
         }
      }
   }
   cout << cnt;
   return 0;
}
