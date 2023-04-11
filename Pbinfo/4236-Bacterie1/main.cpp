#include <iostream>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    if(n>m)
        swap(n,m);
    cout << n*m-(n*(n+1)/2);
    return 0;
}
