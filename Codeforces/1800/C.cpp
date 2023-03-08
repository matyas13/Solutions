#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

void solve(){
	ll n, x, ans=0;
	cin >> n;
	priority_queue <ll> pq;
	for(ll i=0; i<n; i++){
		cin >> x;
		if(x!=0){
			pq.push(x);
		}
		else{
			if(!pq.empty()){
				ans+=pq.top();
				pq.pop();
			}
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