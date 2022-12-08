#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<=9)
        cout << 1;
    else if(n>=100)
        cout << 3;
    else
        cout << 2;
    return 0;
}
