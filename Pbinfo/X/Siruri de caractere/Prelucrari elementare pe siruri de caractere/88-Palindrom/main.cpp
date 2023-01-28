#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{
    int n;
    fin >> n;
    string s;
    for(int i=0;i<n;i++){
        fin >> s;
        int k=s.size();
        for(int j=k/2;j>=0;j--){
            if(s[j]!=s[k-j-1]){
                fout << 0 << '\n';
                goto stop;
            }
        }
        fout << 1 << '\n';
        stop:
            continue;
    }
    fin.close();
    fout.close();
    return 0;
}
