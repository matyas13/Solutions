#include <iostream>

using namespace std;

bool cp(int x, int p){
   int cnt=0;
   for(int i=1; i*i<=x; i++){
      if(x%i==0){
         if(x/i==i) cnt++;
         else cnt+=2;
      }
   }
   return cnt>=p;
}

int main(){
   int n, x, p, s=0;
   cin >> n >> p;
   for(int i=0; i<n; i++){
      cin >> x;
      if(cp(x, p)) s+=x;
   }
   cout << s;
   return 0;
}
