#include<iostream>
#include<vector>

using namespace std;
void bucket (int a[],int k)
{

    int ma=a[0];
    for(int i=1;i<k;i++)
    {
        ma=max(ma,a[i]);
    }
    ma++;
    vector <int> bkt[k];
    for(int i=0;i<k;i++)
    {

        int b=(k*a[i])/ma;
        bkt[b].push_back(a[i]);
    }
    for(int i=0;i<k;i++)
        sort(bkt[i].begin(),bkt[i].end());
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
            a[index++]=bkt[i][j];
    }
}
int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bucket(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
