#include <iostream>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n;
	int freq[26]={0};
	for(int i=0; i<n; i++){
		cin >> s;
		for(int j=s.size()-1; j>=0; j--){
			freq[s[j]-'a']++;
		}
	}
	for(int i=0; i<26; i++){
		if(freq[i]%n!=0){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}