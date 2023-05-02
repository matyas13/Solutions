#include <iostream>

using namespace std;

int main(){
   int m, d, ans;
   cin >> m >> d;
   if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
      if(d>=6){
         ans=6;
      }
      else{
         ans=5;
      }
   }
   else if(m==4 || m==6 || m==9 || m==11){
      if(d==7){
         ans=6;
      }
      else{
         ans=5;
      }
   }
   else{
      if(d>=2){
         ans=5;
      }
      else{
         ans=4;
      }
   }
   cout << ans;
   return 0;
}
