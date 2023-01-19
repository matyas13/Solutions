#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("toate.in");
ofstream fout("toate.out");

int ans=-1;

void maxi(int x)
{
    if(x>ans)
        ans=x;
}


int main()
{
    int n,x,p,a,k;
    fin >> n;
    for(int i=0;i<n;i++)
    {
        fin >> x;
        p=1;
        a=0;
        while(x>0){
            k=x%10;
            if(k!=9){
                a=a+k*p;
                p*=10;
            }
            x/=10;
        }
        maxi(a);
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}
