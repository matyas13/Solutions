#include <iostream>

using namespace std;

int main(){
 	int m[1001], x, k, n;
 	cin >> n;
 	for(int i=1; i<=n; i++) cin >> m[i];
 	cin >> x >> k;
 	int p=0, q=0, r=0;
 	bool okp=false;
 	for(int i=1; i<=n; i++){
 		int a=m[i];
 		if(!okp && a==x){
 			okp=true;
 			p=i;
 		}
 		if(a==x){
 			q=i;
 		}
 		if(a==x && k>0){
 			r=i;
 			k--;
 		}
 	} 	
 	cout << p << '\n' << q << '\n';
 	cout << (k==0 ? r : 0);
   return 0;
}