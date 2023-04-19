/**
 * author: matyaskrizbai
 * created: 2023.April.19 17:39:51
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
	int n, cnt=0;
	cin >> n;
	while(n!=50){
		(n>50 ? n-=3 : n+=2);
		cnt++;
	}
	cout << cnt << '\n';
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