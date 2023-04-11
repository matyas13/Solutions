#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long long n, cnt=0, i;
	long double s=0;
	cin >> n;
	for(i=1; i*i<n; i++){
		if(n%i==0){
			s=s+i+n/i;
			cnt+=2;
		}
	}
	if(i*i==n){
		s+=i;
		cnt++;
	}
	cout << fixed << setprecision(2) << s/cnt;
	return 0;
}