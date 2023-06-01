#include <iostream>

using namespace std;

int main(){
 	int n, x, k, cnt=0;
 	cin >> n >> k;
 	for(int i=0; i<n; i++){
 		cin >> x;
 		while(x!=0 && x%k<=1){
 			x/=k;
 		}
 		if(x==0){
 			cnt++;
 		}
 	} 	
 	cout << cnt;
   return 0;
}