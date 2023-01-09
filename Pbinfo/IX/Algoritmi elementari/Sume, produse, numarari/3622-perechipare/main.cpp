#include <iostream>

using namespace std;

int main()
{
    long long a,b,p;
    cin >> a >> b;
    if(a%2==0)
        p=b/2-a/2+1;
    else
        p=b/2-a/2;
    cout << p*p;
    return 0;
}
