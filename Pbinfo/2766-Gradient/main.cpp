#include <iostream>

using namespace std;

int main()
{
    double r1,g1,b1,r2,g2,b2,s,r,g,b;
    cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2 >> s;
    r=r2-r1;
    g=g2-g1;
    b=b2-b1;
    s--;
    for(int i=0;i<=s;i++)
    {
        cout << (int)(r1+r*i/s) << ", " << (int)(g1+g*i/s) << ", " << (int)(b1+b*i/s) << endl;
    }
    return 0;
}
