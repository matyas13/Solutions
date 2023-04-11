#include <iostream>

using namespace std;

int main()
{
    long long n,m,fn=0,cnt=0;
    cin >> n;
    m=n;
    while(m>0){
        fn=fn*10+m%10;
        m/=10;
    }
    while(n>0){
        if(n%10+fn%10!=9){
            cout << "NU";
            return 0;
        }
        n/=10;
        fn/=10;
    }
    cout << "DA";
    return 0;
}
