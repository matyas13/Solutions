#include <iostream>

using namespace std;

bool prime(int x){
	if(x<=1) return false;
	if(x%2==0) return x==2;
	for(int i=3; i*i<=x; i+=2){
		if(x%i==0) return false;
	}
	return true;
}

void sol(int i, int n){
	int x;
	cin >> x;
	if(i<n)
		sol(i+1, n);
	if(prime(x)) cout << x << ' ';
}

int main(){
 	int n;
 	cin >> n;
 	sol(1, n); 	
   return 0;
}