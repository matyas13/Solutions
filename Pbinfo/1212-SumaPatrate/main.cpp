#include <iostream>

using namespace std;

int main()
{
	int m=10234573;
	long long n,x,y,z;
	cin >> n;
	x=n;
	y=n+1;
	z=2*n+1;
	if(x%2==0)
		x/=2;
	else
		y/=2;
	if(x%3==0)
		x/=3;
	else if(y%3==0)
		y/=3;
	else
		z/=3;
	cout << ((x%m*y%m)%m*z%m)%m;
	return 0;
}

