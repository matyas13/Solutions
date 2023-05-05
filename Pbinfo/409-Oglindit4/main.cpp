#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int ogl(int x){
   int fx=0;
   while(x>0){
      fx=fx*10+x%10;
      x/=10;
   }
   return fx;
}

int main(){
   int n, x, cnt=0;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      if(gcd(x, ogl(x))==1) cnt++;
   }
   cout << cnt;
   return 0;
}
