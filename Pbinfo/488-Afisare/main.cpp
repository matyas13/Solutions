#include <iostream>

using namespace std;

int main(){
   int a[1001], n;
   cin >> n;
   for(int i=1; i<=n; i++){
      cin >> a[i];
   }
   for(int i=2; i<=n; i+=2){
      cout << a[i] << ' ';
   }
   cout << '\n';
   for(int i=(n%2==0 ? n-1 : n); i>=1; i-=2){
      cout << a[i] << ' ';
   }
   return 0;
}
