#include <iostream>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int freq[26]={0};
	for(int i=s.size()-1; i>=0; i--){
		freq[s[i]-'a']++;
	}	
	int twos=0, ones=0;
	for(int i=0; i<26; i++){
		if(freq[i]>=2){
			twos++;
		}
		else if(freq[i]==1){
			ones++;
		}
	}
	cout << twos+ones/2 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}