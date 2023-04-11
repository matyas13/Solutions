#include <iostream>

using namespace std;

int main()
{
    float m1=-1000000000,m2=-1000000000,x;
    int n,p1,p2;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(x>m1){
            m1=x;
            p1=i;
        }
        else if(x==m1)
            p2=i;
    }
    cout << p1 << ' ' << p2;
    return 0;
}
