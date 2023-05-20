#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long n, s;
 	cin >> n;
 	vector <bool> v(n+1);
 	s=(n*(n+1))/4;
 	for(int i=n; i>=1; i--){
 		if(s-i>=0){
 			v[i]=true;
 			s-=i;
 		}
 	}
 	
 	for(int i=1; i<=n; i++){
 		if(v[i]) cout << i << ' ';
 	}
 	cout << '\n';
 	for(int i=1; i<=n; i++){
 		if(!v[i]) cout << i << ' ';
 	}
   return 0;
}