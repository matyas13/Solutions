#include <iostream>

using namespace std;

int main()
{
    long long p=1;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
        p*=i;
    cout << p;
    return 0;
}
