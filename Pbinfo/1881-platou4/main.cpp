#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou4.in");
ofstream fout("platou4.out");

int main()
{
    int x,left=1,right,pos;
    fin >> x;
    while(x%2!=0){
        left++;
        fin >> x;
    }
    right=left;
    pos=left+1;
    while(fin>>x){
        if(x%2==0)
            right=pos;
        pos++;
    }
    fout << right-left+1;
    fin.close();
    fout.close();
    return 0;
}
