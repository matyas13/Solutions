#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("af.in");
ofstream fout("af.out");

int main()
{
    long long n,a,b,c;
    char x,e;
    fin >> n;
    for(int i=0;i<n;i++)
    {
        fin >> a >> x >> b >> e >> c;
        if(x=='+')
            (a+b==c) ? fout << "Adevarat" : fout << "Fals";
        if(x=='x')
            (a*b==c) ? fout << "Adevarat" : fout << "Fals";
        if(x=='-')
            (a-b==c) ? fout << "Adevarat" : fout << "Fals";
        if(x==':')
        {
            if(b==0)
                fout << "Fals";
            else
            {
                (a/b==c) ? fout << "Adevarat" : fout << "Fals";
            }
        }
        fout << endl;
    }
    return 0;
}
