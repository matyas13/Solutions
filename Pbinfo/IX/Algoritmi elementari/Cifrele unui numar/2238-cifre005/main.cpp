#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0,r;
    long long x;
    cin >> n >> r;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%9==r)
            cnt++;
    }
    cout << cnt;
    return 0;
}
