#include <iostream>

using namespace std;

int main()
{
    int h,m,x,y;
    cin >> h >> m >> x >> y;
    m=m+y;
    if(m>59)
    {
        h++;
        m=m%60;
    }
    h=(h+x)%24;
    cout << h << ' ' << m;
    return 0;
}
