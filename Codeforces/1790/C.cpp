#include <iostream>

using namespace std;

void srt(int pos[],int sum[],int n)
{
    int aux=1,en=n;
    while(aux!=-1){

        aux=-1;
        for(int i=1;i<en;i++){
            if(sum[i+1]<sum[i]){
                swap(sum[i+1],sum[i]);
                swap(pos[i+1],pos[i]);
                aux=i;
            }
        }
        en=aux;
    }
    return;
}

void solve()
{
    int n,x,pos[101],sum[101]={0};
    cin >> n;
    for(int i=1;i<=n;i++)
        pos[i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            cin >> x;
            sum[x]+=j;
        }
    }
    srt(pos,sum,n);
    for(int i=1;i<=n;i++)
        cout << pos[i] << ' ';
    cout << '\n';
    return;
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
