#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    while(n!=0) {
        long long k=sqrtl(n);
        if(k*k==n) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
        cin >> n;
    }
    return 0;
}