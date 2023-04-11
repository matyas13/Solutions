#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1,mini=10;
    cin >> n;
    while(n>0){
        if(n%2==0 && n%10>maxi)
            maxi=n%10;
        if(n%2==1 && n%10<mini)
            mini=n%10;
        n/=10;
    }
    cout << mini*maxi;
    return 0;
}
