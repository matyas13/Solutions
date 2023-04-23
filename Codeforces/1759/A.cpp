/**
 * author: matyaskrizbai
 * created: 2023.April.22 12:01:54
 **/
#include <iostream>
#include <cstdio>
#include <string>

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
  string s, k;
  cin >> s;
  for(int i=0; i<18; i++){
  	k+="Yes";
  }
  size_t pos = k.find(s);
  if(pos != string::npos){
  	cout << "YES\n";
  }
  else{
  	cout << "NO\n";
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