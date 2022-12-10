#include <iostream>

using namespace std;

int main()
{
    int a,b,k,ossz;
    cin >> a >> b >> k;
    int A=a/k,B=b/k;
    ossz=A*B;
    if(a%k!=0 && b%k!=0)
        ossz=ossz+B+A+1;
    else if(b%k!=0)
        ossz+=A;
    else if(a%k!=0)
        ossz+=B;
    cout << ossz;
    return 0;
}
