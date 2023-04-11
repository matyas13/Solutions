#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll p,k=1;
    cin >> n >> p;
    while(k<=p)
    {
        cout << k << ' ';
        k*=n;
    }
    return 0;
}
