#include <iostream>
#include <string.h>

using namespace std;

bool felt(char a[],int i,int j)
{
    while(i<j){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            return true;
        i++;
    }
    return false;
}

int main()
{
    char a[256];
    cin.getline(a,256);
    int sz[256],k=0,n=strlen(a),i=0,j=0,maxi=0,ind=1;
    while(j<n){
        while(j<n && a[j]!=' ')
            j++;
        if(j-i>maxi && felt(a,i,j)){
            maxi=j-i;
            k=0;
            sz[k]=ind;
            k++;
        }
        else if(j-i==maxi && felt(a,i,j)){
            sz[k]=ind;
            k++;
        }
        ind++;
        while(j<n && a[j]==' ')
            j++;
        i=j;
    }
    int x=0;
    i=j=0;
    ind=1;
    while(j<n){
        while(j<n && a[j]!=' ')
            j++;
        if(ind==sz[x]){
            for(int y=j-1;y>=i;y--)
                cout << a[y];
            x++;
        }
        else{
            for(int y=i;y<j;y++)
                cout << a[y];
        }
        while(j<n && a[j]==' '){
            cout << ' ';
            j++;
        }
        i=j;
        ind++;
    }
    return 0;
}
