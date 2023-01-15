#include <iostream>

using namespace std;

int main()
{
    long long n,cnt=0,n2=0;
    cin >> n;
    while(n>0){
        if(n%10==2)
            n2++;
        cnt++;
        n/=10;
    }
    if(cnt-n2==n2)
        cout << 2 << ' ' << 3;
    else if(cnt-n2<n2)
        cout << 2;
    else
        cout << 3;
    return 0;
}
