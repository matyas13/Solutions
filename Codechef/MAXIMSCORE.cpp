/**
 * author: matyaskrizbai
 * created: 2023.April.19 19:17:11
 **/
#include <iostream>
#include <algorithm>
#include <vector>
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
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	vector <int> diff(n-1);
	for(int i=0; i<n-1; i++){
		diff[i]=abs(v[i]-v[i+1]);
	}
	n--;
	int ans=min(diff[0], diff[n-1]);
	for(int i=1; i<n-1; i++){
		ans=min(ans, max(diff[i], diff[i+1]));
	}

	cout << ans << '\n';
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