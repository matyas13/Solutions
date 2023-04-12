#include <iostream>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	a*=15;
	b*=2;
	cout << (a>=b ? "YES\n" : "NO\n"); 	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}