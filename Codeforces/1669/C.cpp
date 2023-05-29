#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 	int tt;
 	cin >> tt;
 	while(tt--){
 		int elso, masodik, n, x;
 		cin >> n >> elso >> masodik;
 		bool ok=true;
 		for(int i=3; i<=n; i++){
 			cin >> x;
 			if((i%2==1 && x%2!=elso%2) || (i%2==0 && x%2!=masodik%2)){
 				ok=false;
 			}
 		}
 		if(ok){
 			cout << "YES\n";
 		}
 		else{
 			cout << "NO\n";
 		}
 	} 	
   return 0;
}