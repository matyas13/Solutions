#include <iostream>

using namespace std;

int main()
{
    int n,a,b,m=0,p=1;
    cin >> n >> a >> b;
    do{
        if(n%10==a)
            m=m+p*b;
        else
            m=m+p*(n%10);
        p*=10;
        n/=10;
    }while(n>0);
    cout << m;
    return 0;
}
