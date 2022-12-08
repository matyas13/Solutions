#include <iostream>

using namespace std;

int main()
{
    int r,g,b;
    cin >> r >> g >> b;
    if(r>=0 && r<=255 && g>=0 && g<=255 && b>=0 && b<=255)
    {
        if(abs(r-g)<=10 && abs(r-b)<=10 && abs(g-b)<=10)
            cout << "GRI";
        else
            cout << "CULOARE";
    }
    else
        cout << "NU E CULOARE";
    return 0;
}
