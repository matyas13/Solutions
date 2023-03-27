#include <iostream>

using namespace std;

void solve(){
	int n, even=0, odd=0, x;
	cin >> n;
	for(int i=0 ;i<2*n; i++){
		cin >> x;
		(x%2==0 ? even++ : odd++);
	}
	cout << (odd==even ? "YES\n" : "NO\n");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}