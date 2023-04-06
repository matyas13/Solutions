#include <iostream>

using namespace std;

void solve(){
	int n, x, minpoz, maxpoz;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> x;
		if(x==n){
			maxpoz=i;
		}
		if(x==1){
			minpoz=i;
		}
	}
	if(minpoz>maxpoz){
		swap(minpoz, maxpoz);
	}
	
	int from_left=max(minpoz, maxpoz);
	int from_right=n-min(minpoz, maxpoz)+1;
	int from_both=minpoz+n-maxpoz+1;
	cout << min(min(from_left, from_right), from_both) << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}