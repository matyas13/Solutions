#include <iostream>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;

	if(a==b && b==c && a%2==0){
		cout << "YES\n";
		return;
	}	

	if((a==b && c%2==0) || (a==c && b%2==0) || (b==c && a%2==0)){
		cout << "YES\n";
		return;
	}

	if(a==b+c || b==a+c || c==a+b){
		cout << "YES\n";
		return;
	}

	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}