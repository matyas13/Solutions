#include <iostream>

using namespace std;

int main()
{
    long long n,a,b,p=1;
    cin >> n >> a >> b;
    while(p<a)
    {
        p=p<<1;
    }
    while(p<=b && n>0)
    {
        n--;
        cout << p << ' ';
        p=p<<1;
    }
    return 0;
}
