#include <iostream>

using namespace std;

int main()
{
    int mini=1001,x;
    do
    {
        cin >> x;
        if(x>=10 && x<=99 && x<mini)
            mini=x;
    }while(x!=0);
    if(mini==1001)
        cout << "NU EXISTA";
    else
        cout << mini;
    return 0;
}
