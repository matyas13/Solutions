#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << min(2,n-1)*m << '\n';
    }
    return 0;
}
