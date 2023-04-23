/**
 * author: matyaskrizbai
 * created: 2023.April.22 11:06:11
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

int main(){
  skillissue();
  long long n;
  cin >> n;
  for(long long i=1; i<=n; i++){
  	cout << (i*i*(i*i-1)/2) - (4*(i-2)*(i-1)) << '\n';
  }
  return 0;
}