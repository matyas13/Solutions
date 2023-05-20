#include <iostream>

using namespace std;

int gcd(int a, int b){
	return (b ? gcd(b, a%b) : a);
}

int main(){
 	int n, a[200];
 	cin >> n;
 	for(int i=0; i<n; i++) cin >> a[i];
 	int cnt=0;
 	for(int i=0; i<n/2; i++){
 		if(gcd(a[i], a[n-i-1])==1) cnt++;
 	}
 	cout << cnt;
  return 0;
}