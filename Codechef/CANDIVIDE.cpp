#include <iostream>

using namespace std;

void solve(){
	int x;
	cin >> x;
	cout << (x%3==0 ? "YES\n" : "NO\n");	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}