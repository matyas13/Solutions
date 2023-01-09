#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("level3_7.in");
ofstream fout("level3_7.out");

struct szellem
{
    char lepes[10000];
    int x,y;
}gh[50];

char a[101][101],pac[10000];
int n,px,py,ghostcnt,lepes_szam;

void beolvas()
{
    fin>> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>> a[i][j];
    fin >> px >> py >> lepes_szam ;
    fin >> pac;
    fin >> ghostcnt;
    for(int i=0;i<ghostcnt;i++)
    {
        fin >> gh[i].x >> gh[i].y >> lepes_szam >> gh[i].lepes;
    }
}

int coin=0;

void megold()
{
    int akt_lep=0;
    while(lepes_szam>0)
    {
        lepes_szam--;
        if(pac[akt_lep]=='L')
            py--;
        else if(pac[akt_lep]=='R')
            py++;
        else if(pac[akt_lep]=='U')
            px--;
        else if(pac[akt_lep]=='D')
            px++;
        if(a[px][py]=='W')
        {
            fout << coin << ' ' << "NO";
            return;
        }
        for(int i=0;i<ghostcnt;i++)
        {
            if(gh[i].lepes[akt_lep]=='L')
                gh[i].y--;
            if(gh[i].lepes[akt_lep]=='R')
                gh[i].y++;
            if(gh[i].lepes[akt_lep]=='U')
                gh[i].x--;
            if(gh[i].lepes[akt_lep]=='D')
                gh[i].x++;
        }
        akt_lep++;
        for(int i=0;i<ghostcnt;i++)
        {
            if(gh[i].x==px && gh[i].y==py)
            {
                fout << coin << ' ' << "NO";
                return;
            }
        }
        if(a[px][py]=='C')
        {
            coin++;
            a[px][py]='-';
        }
    }
    fout << coin << ' ' << "YES";
}

int main()
{
    beolvas();
    megold();
    fin.close();
    fout.close();
    return 0;
}
