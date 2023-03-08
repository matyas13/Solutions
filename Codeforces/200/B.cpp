#include <iostream>

using namespace std;

int main()
{
    int n;
    double x, sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        sum+=(x/100);
    }
    cout << sum/(n*1.0)*100;
    return 0;
}
