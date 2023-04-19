/**
 * author: matyaskrizbai
 * created: 2023.April.19 17:35:55
 **/
#include <iostream>
#include <cstdio>

using namespace std;

//#define whoami

void skillissue(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifdef whoami
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

void solve(){
	int n, m;
	cin >> n >> m;
	cout << (m*36>=n ? "YES\n" : "NO\n");
}

int main(){
	skillissue();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}