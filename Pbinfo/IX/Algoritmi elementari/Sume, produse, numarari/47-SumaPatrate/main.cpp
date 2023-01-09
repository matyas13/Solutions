#include <iostream>

using namespace std;

int main()
{
    long long ans=0;
    int n;
    cin >> n;
    while(int i=1;i<=n;i++){
        ans+=i*i;
    }
    cout << "Rezultatul este " << ans;
    return 0;
}
