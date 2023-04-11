#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("formula1.in");
    ofstream fout("formula1.out");
    long long op,k,n;
    fin >> op >> k >> n;
    if(op==1)
        fout << (2*k-1)*(2*k-1);
    else
    {
        long long wsum=4*((n-1)*n*(n+1))/6;
        long long maxi=sqrt(wsum*2+1);
        if(maxi%2==0)
            maxi--;
        cout << maxi*maxi;
    }
    return 0;
}
