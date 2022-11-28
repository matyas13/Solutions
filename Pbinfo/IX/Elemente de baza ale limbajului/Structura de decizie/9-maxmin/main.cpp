#include <iostream>

using namespace std;

int main()
{
    int maxi, mini, a;
    cin >> maxi;
    mini=maxi;
    cin >> a;
    if(a>maxi)
        maxi=a;
    if(a<mini)
        mini=a;
    cin >> a;
    if(a>maxi)
        maxi=a;
    if(a<mini)
        mini=a;
    cout << maxi-mini;
    return 0;
}
