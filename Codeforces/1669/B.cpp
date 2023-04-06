#include <iostream>
#include <unordered_map>

using namespace std;

void solve(){
	int x, n, ans=-1;
	unordered_map <int, int> umap;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		umap[x]++;
		if(umap[x]==3){
			ans=x;
		}
	}
	cout << ans << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}