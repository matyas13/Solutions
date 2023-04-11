#include <iostream>

using namespace std;

int main()
{
    int max1, max2=-1, max3=-1, b;
    cin >> max1 >> b; //first two numbers
    if(b>max1)
    {
        max2=max1;
        max1=b;
    }
    else
        max2=b;
    cin >> b;   //third number
    if(b>max1)
    {
        max3=max2;
        max2=max1;
        max1=b;
    }
    else if(b>max2)
    {
        max3=max2;
        max2=b;
    }
    else
        max3=b;
    cin >> b; //fourth number
    if(b>max1)
    {
        max3=max2;
        max2=max1;
        max1=b;
    }
    else if(b>max2)
    {
        max3=max2;
        max2=b;
    }
    else if(b>max3)
        max3=b;
    cin >> b; //fifth number
    if(b>max1)
    {
        max3=max2;
        max2=max1;
        max1=b;
    }
    else if(b>max2)
    {
        max3=max2;
        max2=b;
    }
    else if(b>max3)
        max3=b;
    cout << max1+max2+max3;
    return 0;
}
