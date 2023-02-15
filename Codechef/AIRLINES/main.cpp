#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        cout << min(x*10,y)*z << '\n';
    }
    return 0;
}
