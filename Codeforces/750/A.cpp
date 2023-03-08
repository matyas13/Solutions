#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    t=240-t;
    int k=5, ans=0;
    while(n>0 && t-k>=0){
        t-=k;
        ans++;
        k+=5;
        n--;
    }
    cout << ans;
    return 0;
}
