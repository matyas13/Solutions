#include <iostream>

using namespace std;

int main()
{
    int a,l,z;
    cin >> z >> l >> a;
    if(a>=1850 && a<=2500 && l>=1 && l<=12)
    {
        if(a%400==0 || (a%4==0 && a%100!=0) && l==2 && z<=29 && z>=1)
            cout << "DA";
        else if(l==2 && z>=1 && z<=28)
            cout << "DA";
        else if((l==4 || l==6 || l==9 || l==11) && (z<=30 && z>=1))
            cout << "DA";
        else if(l!=2 && z<=31 && z>=1 && ((l!=4 && l!=6 && l!=9 && l!=11)))
            cout << "DA";
        else
            cout << "NU";
    }
    else
        cout << "NU";
    return 0;
}
