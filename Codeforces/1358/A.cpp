#include <iostream>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	cout << (a*b+1)/2 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}