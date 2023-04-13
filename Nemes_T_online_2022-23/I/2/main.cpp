#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a[200000];
    cin >> n;
    n=n*2;
    for(int i=0;i<n;i++)
        cin >> a[i];
    int i=0,j=0,db=0;
    while(i<n)
    {
        while(i<n && a[i]!=0)
            i++;
        while(j<n && a[j]!=1)
            j++;
        db=db+(abs(i-j));
        i++;
        j++;
    }
    cout << db;
    return 0;
}
