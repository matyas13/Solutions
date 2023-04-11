#include <iostream>

using namespace std;

int main()
{
	long long n,sum,ans=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum=1;
		for(int j=1;j<=i;j++){
			sum*=j;
		}
		ans+=sum;
	}
	cout <<	"Rezultatul este "  << ans;
	return 0;
}
