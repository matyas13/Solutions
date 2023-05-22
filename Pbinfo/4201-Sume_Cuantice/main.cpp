#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 	int tt;
 	cin >> tt;
 	while(tt--){
 		int n, k, a[1000];
 		cin >> n >> k;
 		for(int i=0; i<n; i++){
 			cin >> a[i];
 			a[i%k]=max(a[i%k], a[i]);
 		} 

 		long long s=0;
 		for(int i=0; i<k; i++){
 			s+=a[i];
 		}
 		cout << s << '\n';
 	}
   return 0;
}