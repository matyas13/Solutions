#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
  	int tt;
  	cin >> tt;
  	while(tt--){
  		string s;
  		int n;
  		cin >> n >> s;
  		s+="W";
  		int piros=0, kek=0;
  		bool ok=true;
  		for(int i=0; i<=n; i++){
  			if(s[i]=='R') piros=1;
  			else if(s[i]=='B') kek=1;
  			else{
  				if(piros+kek!=1){
  				   kek=0;
  					piros=0;
  					continue;
  				}
  				else{
  					ok=false;
  					break;
  				}
  			}
  		}
  		if(ok) cout << "YES\n";
  		else cout << "NO\n";
  	}
   return 0;
}