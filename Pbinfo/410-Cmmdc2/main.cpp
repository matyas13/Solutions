#include <iostream>

using namespace std;

void felez(int &a, int &b){
   b=a;
   int cnt=0;
   while(b>0){
      cnt++;
      b/=10;
   }
   if(cnt%2==0){
      cnt/=2;
      int p=1;
      while(cnt>0){
         b=a%10*p+b;
         p*=10;
         cnt--;
         a/=10;
      }
   }
   else{
      cnt/=2;
      int p=1;
      while(cnt>0){
         b=a%10*p+b;
         p*=10;
         cnt--;
         a/=10;
      }
      a/=10;
   }
}

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int n, m;
   cin >> n;
   felez(n, m);
   cout << gcd(n, m);
   return 0;
}
