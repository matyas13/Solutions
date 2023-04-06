#include <iostream>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int maxi=2*abs(a-b), dist=abs(a-b);
	if(maxi<a || maxi<b || maxi<c || dist==1 || c>maxi){
		cout << -1 << '\n';
	}
	else{
		if(dist+c>maxi){
			cout << (dist+c)%maxi << '\n';
		}
		else{
			cout << dist+c << '\n';
		}
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