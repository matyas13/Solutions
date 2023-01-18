#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n,nr=0,m,x,p,i=1;
    bool ch=false;
    cin >> n;
    m=n;
    while(m>0){
        nr++;
        m/=10;
    }
    while(i<nr && ch==false){
        ch=true;
        m=n;
        p=pow(10,i);
        x=m%p;
        while(m>0 && ch){
            if(m%p==x)
                m=m/p;
            else
                ch=false;
        }
        i++;
    }
    if(!ch)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}
