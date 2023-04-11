#include <iostream>

using namespace std;

int divcnt(int a){
	int i, cnt=0;
	for(i=1; i*i<a; i++){
		if(a%i==0){
			if(i%2==0){
				cnt++;
			}
			if(a/i%2==0){
				cnt++;
			}
		}
	}
	if(i*i==a && i%2==0){
		cnt++;
	}
	return cnt;
}

int main(){
	int a, b, maxidb=0, aktdb, mini, maxi;
	cin >> a >> b;
	for(int i=a; i<=b; i++){
		aktdb=divcnt(i);
		if(aktdb>maxidb){
			maxidb=aktdb;
			mini=maxi=i;
		}
		else if(aktdb==maxidb){
			maxi=i;
		}
	}
	cout << maxidb << ' ' << mini << ' ' << maxi;
	return 0;
}