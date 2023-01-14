#include <iostream>

using namespace std;

int main()
{
    int n,a[100001],elof[100001]={0},alatt,felett,elso,x;
    cin >> n >> elso;
    elof[1]=true;
    alatt=0;
    felett=100001;
    int db=0;
    for(int i=2;i<=n;i++)
    {
        cin >>x;
        if(x<=elso && x>=alatt)
        {
            elof[i]=true;
            alatt=x;
        }
        else if(x>=elso && x<=felett)
        {
            elof[i]=true;
            felett=x;
        }
        else
        {
            db++;
        }
    }
    cout << db << '\n';
    for(int i=1;i<=n;i++)
        if(elof[i]==false)
            cout << i << ' ';
    fin.close();
    return 0;
}
