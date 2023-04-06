#include <iostream>

using namespace std;

void solve(){
	int a, b, n, cnt=0;
	cin >> a >> b >> n;
	while((a<=n && b<=n)){
		if(a<b){
			a+=b;
		}
		else{
			b+=a;
		}
		cnt++;
	}	
	cout << cnt << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}