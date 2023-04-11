#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i*i;
        cout << sum << ' ';
    }
    return 0;
}
