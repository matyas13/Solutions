/**
 * author: matyaskrizbai
 * created: 2023.April.22 11:30:23
 **/ 
#include <iostream>
#include <cstdio>
#include <vector>

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
  long long sum = n*(n+1)/2;
  if(sum%2==1){
  	cout << "NO";
  	return 0;
  }
  cout << "YES\n";
  vector <int> a, b;
  if(n%2==0){
  	for(int i=0; i<n/2; i++){
  		if(i%2==0){
  			a.push_back(i+1);
  			a.push_back(n-i);
  		}
  		else{
  			b.push_back(i+1);
  			b.push_back(n-i);
  		}
  	}
  }
  else{
  	for(int i=0; i<(n-1)/2; i++){
  		if(i%2==0){
  			a.push_back(i+1);
  			a.push_back(n-i-1);
  		}
  		else{
  			b.push_back(i+1);
  			b.push_back(n-i-1);
  		}
  	}
  	if(a.size() > b.size()) b.push_back(n);
  	else a.push_back(n);
  }

  cout << a.size() << '\n';
  for(auto it : a) cout << it << ' ';
  cout << '\n';
	cout << b.size() << '\n';
  for(auto it : b) cout << it << ' ';
  return 0;
}