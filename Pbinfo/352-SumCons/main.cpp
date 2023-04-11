#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    int a;
    cin >> n;
    for(int l=1;l*(l+1)/2<=n;l++)
    {
        cout << (n-l*(l+1)/2)%(l+1) << endl;
        if ((n-l*(l+1)/2)%(l+1)==0)
        {
            a = (n-l*(l+1)/2)/(l+1);
            sum=n;
            while(sum>0)
            {
                cout << a << ' ';
                a++;
                sum-=a;
            }
            cout << '\n';
        }
    }
    return 0;
}
