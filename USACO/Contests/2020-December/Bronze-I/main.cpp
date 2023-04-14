#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a[7];
	for(int i=0; i<7; i++){
		cin >> a[i];
	}
	sort(a, a+7);
	int ABC=a[6], A=a[0], B=a[1];
	
	cout << A << ' ' << B << ' ' << ABC-A-B;

	return 0;
}