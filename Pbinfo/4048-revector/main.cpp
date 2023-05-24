#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

int main(){
  	int n;
  	cin >> n;
  	deque <int> dq(n);
  	for(int i=0; i<n; i++){
  		cin >> dq[i];
  	}
  	vector <int> v;
  	while(n>1){
  		v.push_back(dq.front());
  		v.push_back(dq.back());
  		dq.pop_front();
  		dq.pop_back();
  		n-=2;
  	}
  	if(n==1){
  		v.push_back(dq.front());
  	}
  	reverse(v.begin(), v.end());
  	for(auto it : v){
  		cout << it << ' ';
  	}
   return 0;
}