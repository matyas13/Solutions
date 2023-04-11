#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if(n%2==1)
        n++;
    if(m%2==1)
        m++;
    cout << n/2*m/2;
    return 0;
}
