#include <iostream>

using namespace std;

int ad(int x)
{
    int s=0;
    while(x>0){
        s+=x%10;
        x/=10;
    }
    return s;
}

int main()
{
    int n,nsum,x=0,k=1,m;
    cin >> n;
    nsum=ad(n);
    m=nsum;
    while(nsum>9){
        cout << 9;
        nsum-=9;
        x++;
    }
    cout << nsum;
    while(k<m-x){
        cout << 0;
        k++;
    }
    return 0;
}
