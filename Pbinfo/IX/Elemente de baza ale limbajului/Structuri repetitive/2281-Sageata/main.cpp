#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
            cout << ' ';
        for(int i=1;i<=n;i++)
            cout << '*';
        cout << endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<i;j++)
            cout << ' ';
        for(int i=1;i<=n;i++)
            cout << '*';
        cout << endl;
    }
    return 0;
}
