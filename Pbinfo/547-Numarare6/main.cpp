#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a[1000], mini, maxi;
  cin >> n >> a[0];
  mini=maxi=a[0];
  for(int i=1; i<n; i++){
  	cin >> a[i];
  	mini=min(mini, a[i]);
  	maxi=max(maxi, a[i]);
  }
  int k=maxi-mini, cnt=0;
  for(int i=0; i<n; i++){
  	if(a[i]==k) cnt++;
  }
  cout << cnt;
  return 0;
}