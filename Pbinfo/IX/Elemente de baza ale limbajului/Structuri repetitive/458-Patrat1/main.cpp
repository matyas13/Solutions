#include <iostream>

using namespace std;

int main()
{
    int n;
    char x,y;
    cin >> n >> x >> y;
    for(int i=n/2;i>=1;i--)
    {
        for(int j=n/2;j>=1;j--)
            cout << x << y;
        cout << x << endl;
        for(int j=n/2;j>=1;j--)
            cout << y << x;
        cout << y << endl;
    }
    for(int i=n/2;i>=1;i--)
        cout << x << y;
    cout << x;
    return 0;
}
