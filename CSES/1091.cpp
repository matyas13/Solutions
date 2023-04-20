/**
 * author: matyaskrizbai
 * created: 2023.April.20 16:15:30
 **/ 
#include <iostream>
#include <cstdio>
#include <set>

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

int main(){
  skillissue();
  int n, m, x;
  cin >> n >> m;
  multiset <int, greater<int>> ms;

  for(int i=0; i<n; i++){
    cin >> x;
    ms.insert(x);
  }

  for(int i=0; i<m; i++){
    cin >> x;
    auto it=ms.lower_bound(x);
    if(it==ms.end()){
      cout << -1 << '\n';
    }
    else{
      cout << *it << '\n';
      ms.erase(it);
    }
  }
  return 0;
}