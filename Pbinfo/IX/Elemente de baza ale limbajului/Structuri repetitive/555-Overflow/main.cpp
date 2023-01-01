#include <iostream>
#include <limits.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    int n;
    ll a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        if(b&&a>18446744073709551615ULL/b)
            cout << "Overflow!\n";
        else
            cout << a*b << endl;
    }
    return 0;
}
