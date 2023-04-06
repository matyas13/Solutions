#include <iostream>

using namespace std;

void solve(){
	int n, sum=0, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		sum+=x;
	}
	if(sum>=n){
		cout << sum-n << '\n'; 
	}
	else{
		cout << 1 << '\n';
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}