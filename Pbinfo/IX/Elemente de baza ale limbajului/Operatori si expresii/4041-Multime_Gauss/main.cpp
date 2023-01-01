#include <iostream>

using namespace std;

int main()
{
    long long n,i=1;
    cin >> n;
    while(n-i>0)
    {
        n-=i;
        i++;
    }
    cout << i;
    return 0;
}
