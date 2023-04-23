/**
 * author: matyaskrizbai
 * created: 2023.April.22 12:55:14
 **/
#include <iostream>
#include <cstdio>

using namespace std;

#define whoami

void skillissue(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  #ifdef whoami
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}

void solve(){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
  	for(int j=0; j<n-i; j++){
  		cout << "()";
  	}
  	cout << string(i, '(') + string(i, ')') << '\n';
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