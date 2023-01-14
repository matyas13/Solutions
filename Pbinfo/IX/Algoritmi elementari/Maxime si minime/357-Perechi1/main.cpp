#include <iostream>

using namespace std;

int main()
{
    int n,a,b,m1,m2,sum,ans=1;
    cin >> n >> m1 >> m2;
    sum=abs(m1-m2);
    for(int i=1;i<n;i++){
        cin >> a >> b;
        if(abs(a-b)<=sum){
            sum=abs(a-b);
            m1=a;
            m2=b;
            ans=i+1;
        }
    }
    cout << ans;
    return 0;
}
