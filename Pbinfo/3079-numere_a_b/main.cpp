#include <iostream>

using namespace std;

int main()
{
    int n,m,a=0,p=1;
    cin >> n >> m;
    while(n>0){
        a=a+(n%10+m%10)/2*p;
        p*=10;
        n/=10;
        m/=10;
    }
    cout << a;
    return 0;
}
