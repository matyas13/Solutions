#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float AB, CD, AD;
    cin >> AB >> CD >> AD;
    float Ah=(AB-CD)/2, Dh, hB;
    Dh=sqrt(AD*AD-Ah*Ah);
    hB=AB-Ah;
    cout << sqrt(hB*hB+Dh*Dh);
    return 0;
}
