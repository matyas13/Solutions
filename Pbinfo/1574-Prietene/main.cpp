#include <iostream>

using namespace std;

#define ll long long

ll divsum(int a){
	ll s=1;
	int i;
	for(i=2; i*i<a; i++){
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
	ll n, m;
	cin >> n >> m;
	cout << (divsum(m)==n && divsum(n)==m ? "PRIETENE" : "NU SUNT PRIETENE");
	return 0;
}