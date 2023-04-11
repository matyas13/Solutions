#include <iostream>

using namespace std;

int main()
{
	int n,a,b,c;
	long long x;
	cin >> n;
	while(int i=0;i<n;i++){
		cin >> x;
		a=x;
		b=x+1;
		c=x+2;
		if(a%2==0)
			a/=2;
		else
			b/=2;
		if(a%3==0)
			a/=3;
		else if(b%3==0)
			b/=3;
		else
			c/=3;
		cout << 1ULL*a*b*c << ' ';
	}
	return 0;
}

