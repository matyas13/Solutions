#include <iostream>

using namespace std;

long long f(long long n)
{
    int cnt=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    cnt/=2;
    long long p=1;
    while(cnt>0){
        p*=10;
        cnt--;
    }
    return p;
}

int main()
{
    long long n,p;
    cin >> n;
    p=f(n);
    cout << n/p/10*p+n%p;
    return 0;
}
