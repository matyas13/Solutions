#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("minlex.in");
ofstream fout("minlex.out");

int main()
{
    char a[200001],b[200001]="";
    fin >> a;
    int n=strlen(a),k=0;
    strcpy(b,a);
    strcat(b,a);
    for(int i=0;i<n;i++){
        if(strcmp(b+i,a)<0){
            strcpy(a,b+i);
            k=i;
        }
    }
    fout << k;
    fin.close();
    fout.close();
    return 0;
}
