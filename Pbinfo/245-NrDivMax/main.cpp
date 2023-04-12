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
	ll n, a, maxi=-1;
	cin >> n;
	maxi=divcnt(n);
	a=n;
	for(int i=n-1; i>=1; i--){
		int d=divcnt(i);
		if(d>=maxi){
			maxi=d;
			a=i;
		}
	}
	cout << a;
	return 0;
}