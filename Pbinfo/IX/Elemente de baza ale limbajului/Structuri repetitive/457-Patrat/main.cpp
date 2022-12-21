#include <iostream>

using namespace std;

int main()
{
    int n;
    char be,ki;
    cin >> n >> ki >> be;
    for(int i=1;i<=n;i++)
        cout << ki;
    cout << endl;
    for(int i=2;i<n;i++)
    {
        cout << ki;
        for(int j=2;j<n;j++)
            cout << be;
        cout << ki << endl;
    }
    for(int i=1;i<=n;i++)
        cout << ki;
    return 0;
}
