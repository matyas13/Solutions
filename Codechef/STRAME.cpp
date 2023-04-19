/**
 * author: matyaskrizbai
 * created: 2023.April.19 18:15:48
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
	int n, k=0;
	string s;
	cin >> n >> s;
	bool check;
	while(n>=2){
		check=false;
		for(int i=0; i<n-1; i++){
			if(s[i]!=s[i+1]){
				s.erase(i,2);
				n-=2;
				check=true;
				break;
			}
		}
		if(!check){
			cout << (k==0 ? "RAMOS\n" : "ZLATAN\n");
			return;
		}
		k=(k+1)%2;
	}
	cout << (k==0 ? "RAMOS\n" : "ZLATAN\n");
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