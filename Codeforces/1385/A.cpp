#include <iostream>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a==b && b==c){
		cout << "YES\n" << a << ' ' << b << ' ' << c << '\n';
		return;
	}	

	if(b<a){
		swap(a,b);
	}
	if(c<b){
		swap(b,c);
	}
	if(b<a){
		swap(a,b);
	}

	if(b==c){
		cout << "YES\n" << 1 << ' ' << a << ' ' << b << '\n';
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