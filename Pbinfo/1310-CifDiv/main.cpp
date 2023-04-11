#include <iostream>

using namespace std;

int main()
{
    int n,m,cnt=0;
    cin >> n >> m;
    if(n%10!=0 && m%(n%10)==0)
        cnt++;
    n/=10;
    if(n%10!=0 && m%(n%10)==0)
        cnt++;
    n/=10;
    if(n!=0 && m%n==0)
        cnt++;
    cout << cnt;
    return 0;
}
