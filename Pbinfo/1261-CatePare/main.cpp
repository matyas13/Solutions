#include <iostream>

using namespace std;

int main()
{
    int cnt=-1,x;
    do
    {
        cin >> x;
        if(x%2==0)
            cnt++;
    }while(x!=0);
    if(cnt==0)
        cout << "NU EXISTA";
    else
        cout << cnt;
    return 0;
}
