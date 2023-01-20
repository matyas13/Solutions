#include <iostream>

using namespace std;

int main()
{
    int n,m,maxi=-1,p=1;
    cin >> n;
    while(p<n){
        m=n/p/10*p+n%p;
        if(m>maxi)
            maxi=m;
        p*=10;
    }
    cout << maxi;
    return 0;
}
