#include <iostream>

using namespace std;

int main(){
   int a[1000], n;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> a[i];
   }
   int st=0, dr=n-1;
   while(st<dr){
      cout << a[st] << ' ' << a[dr] << ' ';
      st++;
      dr--;
   }
   if(st==dr) cout << a[st];
   return 0;
}
