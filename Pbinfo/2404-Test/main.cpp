#include <iostream>
#include <fstream>

using namespace std;

typedef long long ll;

const ll MOD=6669666;

ifstream fin("test.in");
ofstream fout("test.out");

ll binpow(ll a, ll b){
	if(b==0)
		return 1;
	ll res=binpow(a, b/2);
	if(b%2==0)
		return (res%MOD * res%MOD)%MOD;
	else{
		return (res%MOD * res%MOD * a%MOD)%MOD;
	}
}

int main(){
  	ll n, a[1000], b[1000], sum=0;
  	fin >> n;
  	for(int i=0; i<n; i++) fin >> a[i];
  	for(int i=0; i<n; i++) fin >> b[i];

  	for(int i=0; i<n; i++){
  		sum+=binpow(a[i], b[i]);
  	}
  	fout << sum;
   return 0;
}