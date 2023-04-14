#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("shell.in");
ofstream fout("shell.out");

int main(){
    int n, a, b, g, guess[4]{0, 1, 2, 3}, cnt[4]={};
    fin >> n;
    for(int i=0; i<n; i++){
        fin >> a >> b >> g;
        swap(guess[a], guess[b]);
        cnt[guess[g]]++;
    }
    fout << max(cnt[1], max(cnt[2], cnt[3]));
    fin.close();
    fout.close();
    return 0;
}