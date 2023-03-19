#include <iostream>

using namespace std;

void solve(){
	int n, b=0, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		(x%2==0 ? b+=x : b-=x);
	}
	cout << (b>0 ? "YES\n" : "NO\n");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}