/**
 * author: matyaskrizbai
 * created: 2023.April.22 10:07:36
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
  long long i, j;
  cin >> i >> j;
  long long k = max(i, j);
  long long ans = 1 + k*(k-1);
  if(i>=j){
  	if(i%2==0) cout << ans + (k - j) << '\n';
  	else cout << ans - (k - j) << '\n';
  }
  else{
  	if(j%2==0) cout << ans - (k - i) << '\n';
  	else cout << ans + (k - i) << '\n';
  }
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