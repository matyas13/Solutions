#include <iostream>

using namespace std;

void solve(){
	int n, a, b;
	cin >> n >> a >> b;
	cout << n/2*a+(n+1)/2*b << '\n';	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}