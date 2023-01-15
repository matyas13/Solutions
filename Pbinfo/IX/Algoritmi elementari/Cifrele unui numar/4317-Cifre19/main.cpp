#include <iostream>

using namespace std;

void f(int n,int &mini,int &maxi)
{
    mini=10,maxi=-1;
    while(n>0){
        if(n%10>maxi)
            maxi=n%10;
        if(n%10<mini)
            mini=n%10;
        n/=10;
    }
    return;
}

int main()
{
    int n,mini,maxi;
    cin >> n;
    f(n,mini,maxi);
    int p=1,k=0;
    while(n>0){
        if(n%10==mini)
            k=p*maxi+k;
        else if(n%10==maxi)
            k=p*mini+k;
        else
            k=p*(n%10)+k;
        p*=10;
        n/=10;
    }
    cout << k;
    return 0;
}
