#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

void megold()
{
    char a[101][101];
    int n;
    fin>> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>> a[i][j];
    int x,y,db=0,lepes_szama;
    fin >> x >> y >> lepes_szama;
    char lepes;
    while(lepes_szama>0)
    {
        fin >> lepes;
        lepes_szama--;
        if(lepes=='L')
            y--;
        if(lepes=='R')
            y++;
        if(lepes=='D')
            x++;
        if(lepes=='U')
            x--;
        if(a[x][y]=='C')
        {
            db++;
            a[x][y]='-';
        }
    }
    fout << db;
}

int main()
{
    megold();
    fin.close();
    fout.close();
    return 0;
}
