#include <iostream>
#include <map>

using namespace std;

using ll=long long;

ll cntmax, maxi;
map <int, int> mp;

void desc(ll &n, ll d){
   if(n%d==0){
      ll cnt=0;
      while(n%d==0){
         cnt++;
         n/=d;
      }
      mp[d]++;
   }
}

void solve(ll n){
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
}

int main(){
   ll a, b;
   cin >> a >> b;
   solve(a);
   solve(b);

   for(auto it : mp){
      if(it.second==1){
         cout << "NU";
         return 0;
      }
   }
   cout << "DA";
   return 0;
}
