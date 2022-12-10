#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if((int)sqrt(n)*((int)sqrt(n)+1)==n)
        cout << (int)sqrt(n) << ' ' << (int)sqrt(n)+1;
    else
        cout << "NU EXISTA";
    return 0;
}
