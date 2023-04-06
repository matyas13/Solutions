#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << (min(b, c)-a>=0 ? "Yes\n" : "No\n");	
	return 0;
}