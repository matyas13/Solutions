#include <iostream>

using namespace std;

int main()
{
    int a,b,cnt=0;
    cin >> a >> b;
    while(b%a==0)
    {
        cnt++;
        b/=a;
    }
    cout << cnt;
    return 0;
}
