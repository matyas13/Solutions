#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++)
        cout << "__0_0___";
    if(n>1)
    {
        cout << endl;
        for(int i=2;i<n;i++)
        {
            for(int j=1;j<=m;j++)
                cout << "_0___0__";
            cout << endl;
        }
        for(int j=1;j<=m;j++)
            cout << "0_____0_";
    }
    return 0;
}
