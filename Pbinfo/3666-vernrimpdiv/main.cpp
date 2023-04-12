#include <iostream>

using namespace std;

#define ll long long

ll divcnt(ll a){
	ll cnt=0, i;
	for(i=1; i*i<a; i++){
		if(a%i==0){
			cnt+=2;
		}
	}
	if(i*i==a){
		cnt++;
	}
	return cnt;
}

int main(){
	ll n;
	cin >> n;
	cout << (divcnt(n)%2==1 ? "da" : "nu");
	return 0;
}