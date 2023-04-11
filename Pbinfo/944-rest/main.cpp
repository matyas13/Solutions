#include <iostream>

using namespace std;

int main()
{
    long long n,p=1,k,maxi=-1;
    cin >> n;
    while(p<n){
        k=(n/p/10)*p+n%p;
        if(k!=0 && n%k>maxi)
            maxi=n%k;
        p*=10;
    }
    cout << maxi;
    return 0;
}
