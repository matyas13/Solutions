#include <iostream>

using namespace std;

int main(){
 	int a[500], n;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 	} 
 	int cnt=0;
 	for(int i=0; i<n/2; i++){
 		if(a[i]/10%10==a[n-i-1]/10%10) cnt++;
 	}
 	cout << cnt;
  return 0;
}