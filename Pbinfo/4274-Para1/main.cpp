#include <iostream>

using namespace std;

int main()
{
    int n;
    char x;
    cin >> n >> x;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << x;
        cout << endl;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << ' ';
        for(int j=i+1;j<=n;j++)
            cout << x;
        if(i<n-1)
            cout << endl;
    }
    return 0;
}
