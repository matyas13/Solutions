#include <iostream>

using namespace std;

int main()
{
    long long n,k,x,s;
    cin >> n >> k;
    s=n;
    for(int i=0;i<k;i++)
    {
        cin >> x;
        s=s+x;
    }
    s==n ? cout << "DA" : cout << "NU";
    return 0;
}
