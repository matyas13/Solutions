#include <iostream>

using namespace std;

void solve(){
	long long n, p=1;
	cin >> n;
	while(p<=n){
		p*=10;
	}
	p/=10;
	cout << n-p << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}