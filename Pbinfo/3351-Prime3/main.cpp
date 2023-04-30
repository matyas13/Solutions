#include <iostream>

using namespace std;

bool prime(int n){
   if(n<=1) return false;
   if(n%2==0) return n==2;
   for(int i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   int n, x;
   long long s=0;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      if(prime(x)) s+=x;
   }
   cout << s;
   return 0;
}
