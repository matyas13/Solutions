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
   int n, a[1000];
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> a[i];
   }
   int m=n-1;
   while(m>=0 && !prime(a[m])){
      m--;
   }
   if(m>=0)
      a[m]=0;
   for(int i=0; i<n; i++){
      cout << a[i] << ' ';
   }
   return 0;
}
