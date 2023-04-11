#include <iostream>
#include <math.h>

using namespace std;

int add(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    long long n,s,cnt=0,k;
    cin >> n >> s;
    k=pow(10,n)-1;
    for(int i=pow(10,n-1);i<=k;i++)
    {
        if(add(i)==s)
        {
            cout << i << ' ';
            cnt++;
        }
    }
    if(cnt==0)
        cout << 0;
    else
        cout << endl << cnt;
    return 0;
}
