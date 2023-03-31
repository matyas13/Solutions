#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

void megold()
{
    int a[101][101],db=0,n;
    fin >> n;
    char x;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            fin>>x;
            if(x=='C')
                db++;
        }
    }
    fout << db;
}

int main()
{
    megold();
    return 0;
}
