#include <iostream>

using namespace std;

int main()
{
    int n,a,b,p;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        p=1;
        if(a>b)
            swap(a,b);
        while(p<a)
            p=p<<1;
        while(p<=b)
            p=p<<1;
        p/=2;
        if(p>=a)
            cout << p << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
