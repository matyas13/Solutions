#include <iostream>

using namespace std;

int main()
{
    long long n,x,maxi=10;
    cin >> n >> x;
    while(n>0){
        if(n%10<maxi && n%10>x)
            maxi=n%10;
        n/=10;
    }
    if(maxi==10)
        cout << -1;
    else
        cout << maxi;
    return 0;
}
