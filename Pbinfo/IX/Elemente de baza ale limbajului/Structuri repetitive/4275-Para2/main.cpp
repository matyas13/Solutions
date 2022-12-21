#include <iostream>

using namespace std;

int main()
{
    int n;
    char x;
    cin >> n >> x;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
            cout << ' ';
        for(int j=i;j<=n;j++)
            cout << x;
        cout << endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout << x;
        cout << endl;
    }
    return 0;
}
