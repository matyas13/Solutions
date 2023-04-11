#include <iostream>

using namespace std;

int main()
{
    int n;
    long long p=1;
    cin >> n;
    for(int i=2;i<=n*2;i+=2)
        p*=i;
    cout << p;
    return 0;
}
