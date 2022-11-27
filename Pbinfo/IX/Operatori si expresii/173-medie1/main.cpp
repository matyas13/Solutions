#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    float med=(float)(a+b+c)/3;
    int ans=med*100;
    cout << ans/100 << '.' << ans/10%10 << ans%10;
    return 0;
}
