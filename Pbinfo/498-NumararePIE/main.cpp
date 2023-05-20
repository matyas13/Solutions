#include <iostream>

using namespace std;

int gcd(int a, int b){
	return (b ? gcd(b, a%b) : a);
}

int main(){
 	int a[200], n;
 	cin >> n;
 	for(int i=0; i<n; i++) cin >> a[i];	

 	int cnt=0;
 	for(int i=0; i<n; i++){
 		for(int j=i+1; j<n; j++){
 			if(gcd(a[i], a[j])==1) cnt++;
 		}
 	} 
 	cout << cnt;
  	return 0;
}