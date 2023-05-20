#include <iostream>

using namespace std;

void sol(int i, int n){
	int x;
	cin >> x;
	if(i<n)
		sol(i+1, n);
	if(x%2==1) cout << x << ' ';
}

int main(){
 	int n;
 	cin >> n;
 	sol(1, n); 	
   return 0;
}