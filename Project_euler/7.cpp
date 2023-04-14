#include <iostream>

using namespace std;

#define ll long long

bool prime(ll x){
	for(ll i=3; i*i<=x; i+=2){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ll x=3, cnt=10000;
	
	do{
		if(!prime(x)){
			x+=2;
		}
		else{
			cnt--;
			x+=2;
		}
	}while(cnt>0);

	cout << x-2;
	return 0;
}