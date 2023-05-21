#include <iostream>

using namespace std;

int main(){
 	int m, n, x, maxi=-1, cnt;
 	cin >> m >> n;
 	for(int i=0; i<m; i++){
 		int akt=-1;
 		for(int j=0; j<n; j++){
 			cin >> x;
 			akt=max(akt, x);
 		}
 		if(akt>maxi){
 			cnt=1;
 			maxi=akt;
 		}
 		else if(akt==maxi) cnt++;
 	} 	
 	cout << maxi << ' ' << cnt;
   return 0;
}