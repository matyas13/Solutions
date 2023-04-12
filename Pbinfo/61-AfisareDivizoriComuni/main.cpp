#include <iostream>

using namespace std;

int gcd(int a, int b){
	return (b ? gcd(b, a%b) : a);
}

int main(){
	int n, m;
	cin >> n >> m;
	int div=gcd(n, m);
	for(int i=1; i<=div; i++){
		if(div%i==0){
			cout << i << ' ';
		}
	}	
	return 0;
}