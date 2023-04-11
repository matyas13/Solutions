#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("planta.in");
    ofstream fout("planta.out");
    int d, b, a, n;
    fin >> d >> a >> b >> n;
    if(n%2==1)
        d=d+(n/2+1)*a;
    else
        d=d+(n/2)*a;
    d=d-n/2*b;
    fout << d;
    fin.close();
    fout.close();
    return 0;
}
