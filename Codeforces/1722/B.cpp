#include <iostream>

using namespace std;

void solve(){
	int n;
	string a, b;
	cin >> n >> a >> b;
	for(int i=0; i<n; i++){
		if((a[i]=='R' && b[i]!='R') || (a[i]!='R' && b[i]=='R')){
			cout << "NO\n";
			return;
		}
	}	
	cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}