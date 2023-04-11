#include <iostream>

using namespace std;

int main()
{
    int m1,m2=10000,m3=10000,n,x;
    cin >> n >> m1;
    for(int i=1;i<n;i++){
        cin >> x;
        if(x<=m1){
            m3=m2;
            m2=m1;
            m1=x;
        }
        else if(x<=m2){
            m3=m2;
            m2=x;
        }
        else if(x<m3)
            m3=x;
    }
    cout << m3 << ' ' << m2 << ' ' << m1;
    return 0;
}
