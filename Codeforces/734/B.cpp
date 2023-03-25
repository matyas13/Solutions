#include <iostream>

using namespace std;

int main(){
	int two, three, five, six;
	cin >> two >> three >> five >> six;
	cout << 256*(min(min(two, five), six)) + 32*(min(three, two-min(min(two, five), six))) << '\n';	
	return 0;
}