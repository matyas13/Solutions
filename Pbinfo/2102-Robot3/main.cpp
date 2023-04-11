#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("robot3.in");
ofstream fout("robot3.out");

char a[1001];

void solve1()
{
    int n=strlen(a),cnt=0;
    for(int i=0;i<n;i++)
        if(a[i]=='A')
            cnt++;
    fout << cnt;
    return;
}

void solve2()
{
    int i=0,curr=0;
    char step,direc;
    while(a[i]!='T')
    {
        if(a[i]=='D' || a[i]=='S')
        {
            direc=a[i++];
            step=a[i]-'0';
            if(direc=='D')
                curr=(curr+step)%10;
            else
            {
                curr=curr-step;
                if(curr<0)
                    curr=10+curr;
            }
        }
        else
            fout << curr;
        i++;
    }
    return;
}

void solve3()
{
    char D='D',S='S',A='A';
    int n=strlen(a),curr=0,act,left,right;
    for(int i=0;i<n;i++)
    {
        act=a[i]-'0';
        if(curr==act)
            fout << A;
        else if(curr<act)
        {
            right=act-curr;
            left=10-right;
            if(left<right)
                fout << S << left << A;
            else
                fout << D << right << A;
        }
        else
        {
            left=curr-act;
            right=10-left;
            if(left<right)
                fout << S << left << A;
            else
                fout << D << right << A;
        }
        curr=act;
    }
    fout << "T";
}

int main()
{
    int c;
    fin >> c >> a;
    (c==1) ? solve1() : (c==2) ? solve2() : solve3();
    fin.close();
    fout.close();
    return 0;
}
