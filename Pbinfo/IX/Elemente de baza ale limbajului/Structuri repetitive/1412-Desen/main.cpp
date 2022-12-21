#include <iostream>

using namespace std;

int main()
{
    int c,n;
    cin >> c >> n;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cout << i;
            cout << endl;
        }
    }
    else if(c==2)
    {
        for(int i=1;i<n;i++)
        {
            for(int j=n-i;j>=1;j--)
                cout << ' ';
            for(int j=i*2;j>1;j--)
                cout << i;
            cout << endl;
        }
        for(int i=n*2;i>1;i--)
            cout << n;
        cout << endl;
        for(int i=n-1;i>=1;i--)
        {
            for(int j=n-i;j>=1;j--)
                cout << ' ';
            for(int j=i*2;j>1;j--)
                cout << i;
            cout << endl;
        }
    }
    else if(c==3)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n*2;j++)
                cout << i;
            cout << endl;
        }
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            for(int j=n-i;j>=1;j--)
                cout << ' ';
            for(int j=i*2;j>1;j--)
                cout << i;
            cout << endl;
        }
        for(int i=n*2;i>1;i--)
            cout << n;
    }
    return 0;
}
