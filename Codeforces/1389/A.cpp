#include <iostream>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	if(b%2==0){
		if(b/2>=a){
			cout << b/2 << ' ' << b << '\n';
			return;
		}
	}	
	else{
		b--;
		if(b/2>=a){
			cout << b/2 << ' ' << b << '\n';
			return;
		}
	}
	cout << "-1 -1\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}