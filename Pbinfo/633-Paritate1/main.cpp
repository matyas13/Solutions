#include <iostream>

using namespace std;

int main() {
    int n, x, imp=0, par=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        (x%2==0 ? par++ : imp++);
    }
    cout << abs(par-imp);
    return 0;
}