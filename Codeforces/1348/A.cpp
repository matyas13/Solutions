#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a=(1<<n), b=0, p=2;
        for(int i=1; i<n/2; i++){
            a+=p;
            p*=2;
        }
        for(int i=n/2; i<n; i++){
            b+=p;
            p*=2;
        }
        cout << abs(a-b) << '\n';
    }
    return 0;
}
