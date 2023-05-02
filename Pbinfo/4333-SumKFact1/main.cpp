#include <iostream>

using namespace std;

int main(){
   int k, n, x;
   long long s=0;
   cin >> k >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      int d=2, y=x;
      int divcnt=0;
      while(x!=1){
         if(x%d==0){
            divcnt++;
            while(x%d==0){
               x/=d;
            }
         }
         d++;
         if(d*d>x && n!=1){
            d=x;
         }
      }
      if(divcnt>=k){
         s+=y;
      }
   }
   cout << s;
   return 0;
}
