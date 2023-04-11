#include <iostream>

using namespace std;

int elim(int a,int k)
{
    int m=0,p=1;
    while(a>0){
        if(a%10!=k){
            m=m+a%10*p;
            p*=10;
        }
        a/=10;
    }
    return m;
}

int main()
{
    int n,x,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        sum+=elim(x/10,x%10);
    }
    cout << sum;
    return 0;
}
