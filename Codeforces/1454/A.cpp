#include <iostream>

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n%2==0){
		for(int i=n; i>=1; i--){
			cout << i << ' ';
		}
		cout << '\n';
	}	
	else{
		for(int i=n; i>=n/2+2; i--){
			cout << i << ' ';
		}
		cout << n/2 << ' ' << n/2 +1 << ' ';
		for(int i=n/2-1; i>=1; i--){
			cout << i << ' ';
		}
		cout << '\n';
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