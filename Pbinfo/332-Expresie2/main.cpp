#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    while(int i=1;i<=n;i++)
        sum+=i*(i+1);
    cout << "Rezultatul este " << sum;
    return 0;
}
