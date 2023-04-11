#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,k=1;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)*k);
        k=-k;
    }
    cout << "Rezultatul este " << sum;
    return 0;
}
