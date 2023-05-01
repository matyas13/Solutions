#include <iostream>

using namespace std;

void desc(int &n, int d){
   if(n%d==0){
      int cnt=0;
      while(n%d==0){
         cnt++;
         n/=d;
      }
      cout << d << ' ' << cnt << '\n';
   }
}

int main(){
   int n;
   cin >> n;
   int d=2;
   desc(n, d);
   d++;
   while(n!=1){
      desc(n, d);
      d+=2;
      if(n!=1 && d*d>n){
         d=n;
      }
   }
   return 0;
}
