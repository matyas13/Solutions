#include <iostream>

using namespace std;

int main() {
    int a[1000], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ult=a[n-1];
    for(int i=0; i<n; i++){
        if(a[i]%ult==0){
            cout << a[i] << ' ';
        }
    }
    return 0;
}