#include <iostream>

using namespace std;

int main(){
 	int a[1000], n, s=0;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 		s+=a[i];
 	} 
 	int k=(1.0*s)/n, cnt=0;

 	for(int i=0; i<n; i++){
 		if(a[i]>k) cnt++;
 	}
 	cout << cnt;
  return 0;
}