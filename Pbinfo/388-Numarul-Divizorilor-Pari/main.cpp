#include <iostream>

using namespace std;

int main(){
	long long n, cnt=0, i;
	cin >> n;
	for(i=1; i*i<n; i++){
		if(n%i==0){
			if(i%2==0){
				cnt++;
			}
			if(n/i%2==0){
				cnt++;
			}
		}
	}
	if(i*i==n && i%2==0){
		cnt++;
	}
	cout << cnt;
	return 0;
}