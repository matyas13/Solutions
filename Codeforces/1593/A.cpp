#include <iostream>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(0, max(b, c)+1-a) << ' ';
	cout << max(0, max(a, c)+1-b) << ' ';
	cout << max(0, max(a, b)+1-c) << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}