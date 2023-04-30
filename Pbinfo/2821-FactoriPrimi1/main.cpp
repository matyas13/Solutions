#include <iostream>
#include <vector>

using namespace std;

void desc(long long n, vector <int> &fact){
   for(int i=2; i*i<=n; i++){
      if(n%i==0){
         fact.push_back(i);
         while(n%i==0) n/=i;
      }
   }
   if(n!=1) fact.push_back(n);
}

int main(){
   long long n;
   cin >> n;
   vector <int> fact;
   desc(n, fact);
   long long nr=1;
   for(int i=0; i<fact.size(); i++){
      nr*=fact[i];
   }
   cout << nr;
   return 0;
}
