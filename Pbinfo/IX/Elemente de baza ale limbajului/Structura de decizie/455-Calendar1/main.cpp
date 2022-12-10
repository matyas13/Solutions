#include <iostream>

using namespace std;

int main()
{
    int zi,l,a;
    cin >> zi >> l >> a;
    if((a%400==0 || (a%4==0 && a%100!=0)) && l==2 && zi==29)
    {
        l=3;
        zi=1;
    }
    else if(a%400!=0 && (a%4!=0 || a%100==0) && l==2 && zi==28)
    {
        l=3;
        zi=1;
    }
    else if((l==4 || l==6 || l==9 || l==11) && zi==30)
    {
        l++;
        zi=1;
    }
    else if(l==12 && zi==31)
    {
        a++;
        zi=1;
        l=1;
    }
    else if(zi==31 && (l!=4 && l!=6 && l!=9 && l!=11))
    {
        l++;
        zi=1;
    }
    else
        zi++;
    cout << zi << ' ' << l << ' ' << a;
    return 0;
}
