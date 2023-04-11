#include <iostream>

using namespace std;

int main()
{
    int w,b,sw,sb,f1=0,f2=1,cnt=1;
    cin >> w >> b;
    sw=w;
    sb=b;
    while(sb>=0 && sw>=0)
    {
        cnt++;
        f2=f1+f2;
        f1=f2-f1;
        w=sw;
        b=sb;
        if(f2%2==0)
        {
            sw=sw-f2/2;
            sb=sb-f2/2;
        }
        else
        {
            sw=sw-(f2/2+1);
            sb=sb-f2/2;
        }
    }
    cout << cnt-2 << endl << w << endl << b;
    return 0;
}
