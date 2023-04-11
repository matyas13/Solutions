#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou1.in");
ofstream fout("platou1.out");

int main()
{
    int maxlen=0,actlen=1,nr,x,y;
    fin >> x;
    while(fin>>y){
        if(x==y)
            actlen++;
        else{
            if(actlen>maxlen){
                maxlen=actlen;
                nr=x;
            }
            else if(actlen==maxlen && x<nr)
                nr=x;
            actlen=1;
        }
        x=y;
    }
    if(actlen>maxlen){
        maxlen=actlen;
        nr=x;
    }
    else if(actlen==maxlen && x<nr)
        nr=x;
    fout << maxlen << ' ' << nr;
    fin.close();
    fout.close();
    return 0;
}
