#include <iostream>

using namespace std;

int main(){
 	int n, a[200];
 	cin >> n;
 	for(int i=0; i<n; i++) cin >> a[i];

 	int cnt=0;
 	for(int i=0; i<n; i++){
 		for(int j=i+1; j<n; j++){
 			if(a[i]/10%10==a[j]/10%10) cnt++;
 		}
 	} 
 	cout << cnt;
  return 0;
}