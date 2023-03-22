#include <iostream>

using namespace std;

void solve(){
	int x, y;
	cin >> x >> y;
	cout << (5*x>=y ? "YES\n" : "NO\n");	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}