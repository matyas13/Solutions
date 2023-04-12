#include <iostream>

using namespace std;

void solve(){
	int n, x, s=0, cnt=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> x;
		s+=x;
		if(i==s){
			cnt++;
		}
	}
	cout << cnt << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}