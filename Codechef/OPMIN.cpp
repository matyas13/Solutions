#include <iostream>

using namespace std;

void solve(){
	int n, x, mini=101, cnt=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x<mini){
			cnt=1;
			mini=x;
		}
		else if(x==mini){
			cnt++;
		}
	}	
	cout << n-cnt << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}