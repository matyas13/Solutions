#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("restmare.in");
ofstream fout("restmare.out");

int main(){
    long long n, m;
    fin >> n;
    m=n/2;
    if(n%2==1){
        fout << m*m;
    }
    else{
        fout << m*(m-1);
    }
    fin.close();
    fout.close();
    return 0;
}