#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifre006.in");
ofstream fout("cifre006.out");

void solve(int n,int k)
{
    int p=1,m=0,a=0,cnt=0,x;
    do
    {
        x=n%10;
        if(x==k){
            a=a*10+k;
            cnt++;
        }
        else{
            m=m+x*p;
            p*=10;
        }
        n/=10;
    }while(n>0);
    fout << cnt << endl << a*p+m;
    return;
}

int main()
{
    int n,k;
    fin >> n >> k;
    solve(n,k);
    fin.close();
    fout.close();
    return 0;
}
