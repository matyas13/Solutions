#include <iostream>

using namespace std;

int main()
{
	int n;
	long long ans=0,p;
	cin >> n;
	for(long long i=1;i<=n;i++){
		p=1;
		for(int j=1;j<=i;j++){
			p=p*i;
		}
		ans+=p;
	}
	cout <<	"Rezultatul este " << ans;
	return 0;
}
