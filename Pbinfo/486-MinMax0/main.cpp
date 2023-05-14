#include <iostream>

using namespace std;

int mini(int a[], int n){
   if(n==0){
      return a[0];
   }
   return min(a[n], mini(a, n-1));
}

int maxi(int a[], int n){
   if(n==0){
      return a[0];
   }
   return max(a[n], maxi(a, n-1));
}

int main(){
   int a[1000], n;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> a[i];
   }
   cout << mini(a, n-1) << ' ' << maxi(a, n-1);
   return 0;
}
