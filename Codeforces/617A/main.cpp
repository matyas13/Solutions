#include <iostream>

using namespace std;

int main()
{
    int x,ans=0;
    cin >> x;
    for(int i=5; i>=1; i--){
        while(x-i>=0){
            x-=i;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
