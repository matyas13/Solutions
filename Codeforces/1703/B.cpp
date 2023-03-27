#include <iostream>
#include <unordered_map>

using namespace std;

void solve(){
	int n;
	string s;
	unordered_map <char, int> umap;
	cin >> n >> s;
	for(int i=0; i<n; i++){
		if(umap.find(s[i])==umap.end()){
			umap[s[i]]+=2;
		}
		else{
			umap[s[i]]++;
		}
	}
	int cnt=0;
	for(auto it=umap.begin(); it!=umap.end(); it++){
		cnt+=it -> second;
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