#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("parimpar2.in");
ofstream fout("parimpar2.out");

int main()
{
    int i,p,x,a,b;
    fin >> i >> p;
    while(!fin.eof() && i>0 && p>0)
    {
        fin >> x;
        if(x%2==0)
        {
            p--;
            a=x;
        }
        else
        {
            i--;
            b=x;
        }
    }
    while(!fin.eof() && i>0)
    {
        fin >> x;
        if(x%2==1)
        {
            i--;
            b=x;
        }
    }
    while(!fin.eof() && p>0)
    {
        fin >> x;
        if(x%2==0)
        {
            p--;
            a=x;
        }
    }
    if(p+i==0)
        fout << a << ' ' << b;
    else
        fout << "Nu Exista";
    fin.close();
    fout.close();
    return 0;
}
