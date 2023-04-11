#include <iostream>

using namespace std;

int main()
{
    int x,maxi=-1000001;
    cin >> x;
    if(x==0)
    {
        cout << "NU EXISTA";
        return 0;
    }
    do
    {
        if(x>maxi)
            maxi=x;
        cin >> x;
    }while(x!=0);
    cout << maxi;
    return 0;
}
