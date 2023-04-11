#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=i;k++)
                cout << i;
            cout << endl;
        }
    }
    return 0;
}
