#include <iostream>

using namespace std;

int main()
{
    int cnt=0;
    long long sum=0,x;
    do
    {
        cin >> x;
        if(x%2==0)
            sum+=x;
        if(x%100>=10 && x<=99 && x/100==0)
            cnt++;
    }while(x!=0);
    cout << sum << ' ' << cnt;
    return 0;
}
