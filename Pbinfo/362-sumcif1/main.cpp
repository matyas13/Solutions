#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    n/=10;
    while(n>0){
        sum+=n%10;
        n/=100;
    }
    cout << sum;
    return 0;
}
