#include <iostream>

using namespace std;

int main()
{
    long long n;
    int s=0,cnt=0;
    cin >> n;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    do
    {
        cnt++;
        s/=10;
    }while(s>0);
    cout << cnt;
    return 0;
}
