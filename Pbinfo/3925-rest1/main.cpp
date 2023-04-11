#include <iostream>

using namespace std;

int main()
{
    long long n,c,r,m;
    cin >> n >> c >> r;
    m=n/c*c+r;
    if (m<=n)
      cout << m+c;
    else
      cout << m;
    return 0;
}
