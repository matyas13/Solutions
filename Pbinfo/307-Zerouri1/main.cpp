#include <iostream>

using namespace std;

int main() {
   int n, cnt2=0, cnt5=0;
   cin >> n;
   long long p=1, x;
   for(int i=0; i<n; i++){
      cin >> x;
      while(x%2==0){
         cnt2++;
         x/=2;
      }
      while(x%5==0){
         cnt5++;
         x/=5;
      }
      p=p*(x%10)%10;
   }
   int k=min(cnt2, cnt5);
   cnt2-=k;
   cnt5-=k;
   if(cnt2+cnt5==0){
      cout << p;
      return 0;
   }
   int num;
   if(cnt2>0){
      num=2;
   }
   else{
      num=5;
   }
   for(int i=max(cnt2, cnt5); i>0; i--){
      p=(p*num)%10;
   }
   cout << p;
   return 0;
}
