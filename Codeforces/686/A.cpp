#include <iostream>

using namespace std;

int main(){
	int n;
	long long d, nr, dist=0;
	char x;
	cin >> n >> d;	
	for(int i=0; i<n; i++){
		cin >> x >> nr;
		if(x=='+'){
			d+=nr;
		}
		else{
			if(d<nr){
				dist++;
			}
			else{
				d-=nr;
			}
		}
	}
	cout << d << ' ' << dist;
	return 0;
}