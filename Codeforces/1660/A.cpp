#include <iostream>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	cout << (a==0 ? 1 : a+2*b+1) << '\n';	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}