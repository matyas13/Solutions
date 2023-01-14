#include <iostream>

using namespace std;

int main()
{
    long long n,x,mini=1000000000;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x<mini)
            mini=x;
    }
    cout << mini;
    return 0;
}
