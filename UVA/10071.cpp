#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v, t;
    while(cin >> v >> t) {
        cout << 2*v*t << '\n';
    }
    return 0;
}