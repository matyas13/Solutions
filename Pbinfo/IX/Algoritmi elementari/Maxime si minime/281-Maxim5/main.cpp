#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maxim5.in");
ofstream fout("maxim5.out");

int main()
{
    int maxi=-1,actmax,x,cnt,mincnt=1000000000;
    while(!fin.eof()){
        if(fin>>x){
            actmax=x;
            cnt=1;
            fin>>x;
            while(x!=0){
                if(x>actmax)
                    actmax=x;
                cnt++;
                fin >> x;
            }
            if(cnt<mincnt){
                maxi=actmax;
                mincnt=cnt;
            }
            else if(cnt==mincnt && actmax>maxi)
                maxi=actmax;
        }
    }
    fout << maxi;
    fin.close();
    fout.close();
    return 0;
}
