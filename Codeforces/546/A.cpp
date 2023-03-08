#include <iostream>

using namespace std;

int main()
{
    int sum=0, k, n, w;
    cin >> k >> n >> w;
    for(int i=1; i<=w; ++i){
        sum+=i*k;
    }
    if(sum>n)
        cout << sum-n;
    else
        cout << 0;
    return 0;
}
