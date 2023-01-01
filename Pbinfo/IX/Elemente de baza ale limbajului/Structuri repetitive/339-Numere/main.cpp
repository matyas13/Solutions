#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0)
        {
            cout << x;
            return 0;
        }
    }
    cout << "IMPOSIBIL";
    return 0;
}
