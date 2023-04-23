/**
 * author: matyaskrizbai
 * created: 2023.April.22 09:57:05
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
  int n;
  cin >> n;
  if(n<=3){
  	if(n==1) cout << 1;
  	else{
  		cout << "NO SOLUTION";
  		return 0;
  	}
  }
  else{
  	for(int i=2; i<=n; i+=2) cout << i << ' ';
  	for(int i=1; i<=n; i+=2) cout << i << ' ';
  }
  return 0;
}