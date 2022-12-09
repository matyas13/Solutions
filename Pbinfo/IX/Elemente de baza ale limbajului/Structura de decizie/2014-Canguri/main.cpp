#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("canguri.in");
    ofstream fout("canguri.out");
    int a,b,c,nra,nrb,nrc,best;
    fin >> nra >> a >> nrb >> b >> nrc >> c;
    if(a>b && a>c)
    {
        fout << nra;
        best=a;
    }
    if(b>a && b>c)
    {
        fout << nrb;
        best=b;
    }
    if(c>a && c>b)
    {
        fout << nrc;
        best=c;
    }
    fout << endl;
    if(800%best==0)
        fout << 800/best;
    else
        fout << 800/best+1;
    fin.close();
    fout.close();
    return 0;
}
