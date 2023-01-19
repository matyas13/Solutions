#include <iostream>

using namespace std;

int parimpar(int x,int k)
{
    int a=0,p=1;
    while(x>0){
        if(x%2==k){
            a=a+p*(x%10);
            p*=10;
        }
        x/=10;
    }
    return a;
}

int main()
{
    int a,b,n,m;
    cin >> a >> b;
    if(a%2==0)
        n=parimpar(a,0);
    else
        n=parimpar(a,1);
    if(b%2==0)
        m=parimpar(b,0);
    else
        m=parimpar(b,1);
    if(n>m)
        cout << a;
    else if(m>n)
        cout << b;
    else{
        if(a>b)
            cout << a;
        else
            cout << b;
    }
    return 0;
}
