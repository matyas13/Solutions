#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float a=(n+1)/2.0;
    if(a-(int)a==0)
    {
        for(int i=a;i<a+n;i++)
            cout << i << ' ';
    }
    else
        cout << "NU ESTE NOROCOS";
    return 0;
}
