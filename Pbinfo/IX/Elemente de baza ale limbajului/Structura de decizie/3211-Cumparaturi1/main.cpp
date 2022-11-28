#include <iostream>

using namespace std;

int main()
{
    long long S, c, n;
    cin >> S >> c >> n;
    if(S%c==0 && S%n==0)
        cout << "CN";
    else if(S%c==0)
        cout << 'C';
    else if(S%n==0)
        cout << 'N';
    else
        cout << "nimic";
    return 0;
}
