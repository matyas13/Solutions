#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1,mini=10;
    cin >> n;
    do
    {
        if(n%10>maxi)
            maxi=n%10;
        if(n%10<mini)
            mini=n%10;
        n/=10;
    }while(n>0);
    cout << mini+maxi;
    return 0;
}
