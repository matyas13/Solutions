#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    float h;
    h=(float)a*b/c;
    h=h*100;
    int r=h;
    cout << r/100 << '.' << r/10%10 << r%10;
    return 0;
}
