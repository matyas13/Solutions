#include <iostream>

using namespace std;

int main()
{
    int n,m1=-1,m2=-1,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x>=m1){
            m2=m1;
            m1=x;
        }
        else if(x>m2)
            m2=x;
    }
    cout << m1 << ' ' << m2;
    return 0;
}
