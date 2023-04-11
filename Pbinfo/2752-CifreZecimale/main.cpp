#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if(k%2==1)
        cout << k/20+1;
    else
    {
        if(k%20==0)
            cout << 9;
        else
            cout << (k%20)/2-1;
    }
    return 0;
}
