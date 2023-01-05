#include <iostream>

using namespace std;

int main()
{
    int n,p=1;
    cin >> n;
    while(p*p<n)
        p++;
    p--;
    cout << n-p*p << '\n';
    n=p*p;
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=p;j++)
            cout << n-- << ' ';
        cout << '\n';
    }
    return 0;
}
