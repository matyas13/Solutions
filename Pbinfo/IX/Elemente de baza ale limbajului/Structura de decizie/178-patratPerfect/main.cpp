#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(sqrt(n)-(int)sqrt(n)>0)
        cout << "nu";
    else
        cout << "da";
    return 0;
}
