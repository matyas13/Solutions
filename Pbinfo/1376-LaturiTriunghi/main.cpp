#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << '*';
        return 0;
    }
    for(int i=1;i<n;i++)
        cout << ' ';
    cout << "*\n";
    for(int i=1;i<=n-2;i++)
    {
        for(int j=n-1-i;j>=1;j--)
            cout << ' ';
        cout << '*';
        for(int j=i+i-1;j>=1;j--)
            cout << ' ';
        cout << "*\n";
    }
    for(int i=1;i<=n;i++)
        cout << "* ";
    return 0;
}
