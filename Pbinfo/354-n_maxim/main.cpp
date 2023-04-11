#include <iostream>

using namespace std;

int main()
{
    long long n,x,maxi=-1000000000;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x>maxi)
            maxi=x;
    }
    cout << maxi;
    return 0;
}
