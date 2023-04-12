#include <iostream>

using namespace std;

#define ll long long

ll divsum(int a){
	ll s=0;
	int i;
	for(i=1; i*i<a; i++){
		if(a%i==0){
			s=s+i+a/i;
		}
	}
	if(i*i==a){
		s+=i;
	}
	return s;
}

int main(){
	ll n;
	cin >> n;
	cout << (divsum(n)%n==0 ? "DA" : "NU");
	return 0;
}