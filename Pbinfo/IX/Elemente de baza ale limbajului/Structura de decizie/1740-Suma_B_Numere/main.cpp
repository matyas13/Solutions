#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    float x=((2.0*n)/k+1-k)/2;
    if(x-(int)x==0)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
