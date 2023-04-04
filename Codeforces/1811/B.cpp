#include <iostream>

using namespace std;

void solve(){
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	cout << abs(min(min(x1, n-x1+1), min(y1, n-y1+1)) - min(min(x2, n-x2+1), min(y2, n-y2+1))) << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}