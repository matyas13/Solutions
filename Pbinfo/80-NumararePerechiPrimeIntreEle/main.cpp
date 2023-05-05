#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int x, y, cnt=0;
   cin >> x >> y;
   while(y!=0){
      if(gcd(x, y)==1) cnt++;
      x=y;
      cin >> y;
   }
   cout << cnt;
   return 0;
}
