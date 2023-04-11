#include <iostream>

using namespace std;

int main()
{
    int n,k,cnt=0;
    cin >> n >> k;
    while(n>1)
    {
        cnt++;
        n/=10;
    }
    cout << 1;
    for(int i=k*cnt;i>=1;i--)
        cout << 0;
    return 0;
}
