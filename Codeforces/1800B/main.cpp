#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector <int> f1(26), f2(26);

	for(int i=0; i<n; i++){
		if(islower(s[i])){
			f1[s[i]-'a']++;
		}
		else{
			f2[s[i]-'A']++;
		}
	}

	int nr=0, ans=0;
	for(int i=0; i<26; i++){
		ans+=min(f1[i], f2[i]);
		nr+=(abs(f1[i]-f2[i]))/2;
	}
	
	ans+=min(nr, k);
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