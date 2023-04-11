#include <iostream>

using namespace std;

int main()
{
    int h,m,x;
    cin >> h >> m >> x;
    m=(m+x%60);
    if(m>59)
    {
        h++;
        m=m%60;
    }
    x=x/60;
    h=(h+x)%24;
    cout << h << ' ' << m;
    return 0;
}
