#include <iostream>

using namespace std;

int main()
{
    int n;
    bool app[10]={0};
    cin >> n;
    do
    {
        app[n%10]=true;
        n/=10;
    }while(n>0);
    for(int i=0;i<10;i++)
        if(app[i])
            cout << i << ' ';
    return 0;
}
