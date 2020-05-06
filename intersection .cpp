#include<iostream>
#include<map>
#include<hash_set>
using namespace std;
int intr(int a[],int b[],int n,int m)
{


    unordered_set<int> us;
    for(int i=0;i<n;i++)
            us.insert(a[i]);
    int res=0;
    for(int i=0;i<m;i++)
    {

        if(us.find(b[i])!=us.end())
        {

            res++;
            us.erase(b[i]);

        }
    }
    return res;
}
int main()
{
    int n,m,a[1000],b[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
        cin>>b[i];
    int ans=intr(a,b,n,m);
    cout<<ans;
    return 0;
}
