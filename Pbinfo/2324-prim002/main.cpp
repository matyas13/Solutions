#include <iostream>

using namespace std;

using ll=long long;

ll maxi;

void desc(ll &n, ll d){
   if(n%d==0){
      ll cnt=0;
      while(n%d==0){
         cnt++;
         n/=d;
      }
      maxi=d;
   }
}

int main(){
   ll n;
   cin >> n;
   ll d=2;
   desc(n, d);
   d++;
   while(n!=1){
      desc(n, d);
      d+=2;
      if(n!=1 && d*d>n){
         d=n;
      }
   }
   cout << maxi;
   return 0;
}
