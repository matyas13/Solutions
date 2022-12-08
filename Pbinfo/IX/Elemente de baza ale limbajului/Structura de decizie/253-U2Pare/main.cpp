#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0)
        n+=2;
    else
        n++;
    cout << n << ' ' << n+2;
    return 0;
}
