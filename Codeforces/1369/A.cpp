#include <iostream>

using namespace std;

void solve(){
	int n;
	cin >> n;
	cout << ((n%4==0) ? "YES\n" : "NO\n");	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}