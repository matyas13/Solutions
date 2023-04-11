#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    if(n%5==0)
    {
        x=n/5;
        cout << x << endl;
        cout << "DA\n";
    }
    else
    {
        x=n/5+1;
        cout << x << endl;
        cout << "NU\n";
    }
    int i=1,k=1,m=1,y,p;
    while(i<=n)
    {
        p=1;
        while(i<=n && p<=m)
        {
            y=1;
            while(i<=n && y<=5)
            {
                i++;
                y++;
            }
            p++;
        }
        m++;
        if(k==1)
            k=0;
        else
            k=1;
    }
    if(k==0)
        cout << "micsunele";
    else
        cout << "panselute";
    return 0;
}
