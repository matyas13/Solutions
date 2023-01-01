#include <iostream>

using namespace std;

int main()
{
    int n,x,a=-1,b=-1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==1)
        {
            a=b;
            b=x;
        }
    }
    if(a==-1)
        cout << "Numere insuficiente";
    else
        cout << a << ' ' << b;
    return 0;
}
