#include <iostream>

using namespace std;

int main()
{
    int x,mini=1000001;
    cin >> x;
    if(x==0)
    {
        cout << "NU EXISTA";
        return 0;
    }
    do
    {
        if(x<mini && x>=0)
            mini=x;
        cin >> x;
    }while(x!=0);
    if(mini==1000001)
        cout << "NU EXISTA";
    else
        cout << mini;
    return 0;
}
