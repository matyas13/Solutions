#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0;
    cin >> a >> b;
    sum=a+b;
    while(a!=b)
    {
        a=b;
        cin >> b;
        sum+=b;
    }
    cout << sum;
    return 0;
}
