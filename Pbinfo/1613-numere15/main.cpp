#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=0,p1=1,p2=1;
    cin >> n;
    while(n>0){
        if(n%2==0){
            a=a+n%10*p1;
            p1*=10;
        }
        else{
            b=b+n%10*p2;
            p2*=10;
        }
        n/=10;
    }
    cout << abs(a-b);
    return 0;
}
