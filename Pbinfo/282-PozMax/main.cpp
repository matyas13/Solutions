#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

int main()
{
    float m1=-1000000000,m2=-1000000000,x;
    int n,p1,p2;
    fin >> n;
    for(int i=1;i<=n;i++){
        fin >> x;
        if(x>m1){
            m1=x;
            p1=i;
        }
        else if(x==m1)
            p2=i;
    }
    fout << p1 << ' ' << p2;
    fin.close();
    fin.close();
    return 0;
}
