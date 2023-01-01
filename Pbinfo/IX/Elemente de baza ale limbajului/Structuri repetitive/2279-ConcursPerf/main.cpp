#include <iostream>

using namespace std;

bool ech()
{
    int x,n,p,e=0,h=0;
    cin >> n >> p;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<=p/10)
            h++;
        else if(x>=p/2)
            e++;
    }
    return e==1 && h==2;
}

int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        if(ech())
            cout << "da\n";
        else
            cout << "nu\n";
    }
    return 0;
}
