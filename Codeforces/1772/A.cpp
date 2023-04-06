#include <iostream>

using namespace std;

void solve(){
	int a, b;
	char x;
	cin >> a >> x >> b;
	cout << a+b << '\n';	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}