#include <iostream>

using namespace std;

#define ll long long

int main(){
	ll n, i, a, b;
	cin >> n;
	for(i=1; i*i<n; i++){
		if(n%i==0){
			a=i;
			b=n/i;
		}
	}
	if(i*i==n){
		a=b=i;
	}
	cout << a << ' ' << b;
	return 0;
}