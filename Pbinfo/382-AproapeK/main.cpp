#include <iostream>

using namespace std;

int main()
{
    int n,k,x,up;
    cin >> n >> k;
    x=n/k*k;
    if(n!=x)
        up=x+k;
    else
        up=x;

    if(n-x>up-n)
        cout << up;
    else
        cout << x;
    return 0;
}
