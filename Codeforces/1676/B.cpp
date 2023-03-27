#include <iostream>

using namespace std;

void solve(){
	long long least=10000001, x, n, sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		sum+=x;
		least=min(least, x);
	}	
	cout << sum-n*least << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}