#include <iostream>

using namespace std;

int main()
{
    int b,s;
    cin >> b >> s;
    cout << s/b << ' ' << b-(s%b);
    return 0;
}
