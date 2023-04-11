#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");

int main()
{
    int n,x,m1=1000001,m2=1000001;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        if(x>=11 && x%10==x/10%10){
            if(x<=m1){
                m2=m1;
                m1=x;
            }
            else if(x<m2)
                m2=x;
        }
    }
    if(m2==1000001)
        fout << "numere insuficiente";
    else
        fout << m1 << ' ' << m2;
    fin.close();
    fout.close();
    return 0;
}
