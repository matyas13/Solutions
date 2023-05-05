#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, maxa, maxb, maxi=0, a, b;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> a >> b;
      int k=gcd(a, b);
      if(k>maxi){
         maxi=k;
         maxa=a;
         maxb=b;
      }
      else if(k==maxi && a+b>maxa+maxb){
         maxa=a;
         maxb=b;
      }
   }
   cout << maxa << ' ' << maxb;
   return 0;
}
