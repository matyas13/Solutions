#include <iostream>

using namespace std;

int main(){
	int n, x, y, actlen=1, maxlen=0;
	cin >> n >> x;
	for(int i=1; i<n; i++){
		cin >> y;
		if(y>x){
			actlen++;
		}
		else{
			if(actlen>maxlen){
				maxlen=actlen;
			}
			actlen=1;
		}
		x=y;
	}
	if(actlen>maxlen){
		maxlen=actlen;
	}
	cout << maxlen;
	return 0;
}