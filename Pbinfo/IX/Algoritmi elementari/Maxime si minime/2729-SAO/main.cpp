#include <iostream>

using namespace std;

int main()
{
    long long n,m,sum1=0,sum2=0,a,b,p,z=1000000000000001;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        sum1+=a;
        sum2+=b;
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b >> p;
        if(a>=sum1 && b>=sum1 && p<z){
            z=p;
        }
    }
    if(z==1000000000000001)
        cout << -1;
    else
        cout << z;
    return 0;
}
