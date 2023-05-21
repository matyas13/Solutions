#include <iostream>

using namespace std;

int main(){
 	int k, n, a[200];
 	cin >> k >> n;
 	int m=k/2;
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=n-1; i>=0; i--){
 		int x=a[i]%k;
 		if(m>=x) cout << a[i]-x << ' ';
 		else cout << a[i]+k-x << ' ';
 	} 	
   return 0;
}