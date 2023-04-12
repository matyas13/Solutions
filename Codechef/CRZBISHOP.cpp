#include <iostream>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;
	if(n<=2){
		cout << 0 << '\n';
	}
	else if(n%2==0){
		cout << n-4+(n-(n/2-1)) << '\n';
	}
	else{
		cout << (3*n-5)/2 << '\n';
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