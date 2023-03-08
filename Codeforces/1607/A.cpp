#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve(){
	map <char, int> map;
	string key, word;
	cin >> key >> word;
	for(int i=0; i<26; i++){
		map[key[i]]=i;
	}
	 
	int ans=0, n=word.size();
	for(int i=1; i<n; i++){
		ans+=abs(map[word[i]]-map[word[i-1]]);
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