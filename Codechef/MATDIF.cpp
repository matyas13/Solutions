#include <iostream>

using namespace std;

void solve(){
	int n, x=2;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(x>n*n){
				x=1;
			}
			cout << x << ' ';
			x+=2;
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