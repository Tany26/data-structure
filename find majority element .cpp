#include<iostream>
#include<vector>
using namespace std;
vector<int> ma(vector<int> v)
{

    int e=v[0];
    int c1=1;
    int e2=0;
    int c2=0;
    for(int i=1;i<v.size();i++)
    {
        if(e==v[i])
            c1++;
        else if(e2==v[i])
        {

            c2++;
        }
        else if(c1==0)
        {

            e=v[i];
            c1=1;

        }
        else if(c2==0)
        {

            e2=v[i];
            c2=1;
        }
        else
        {

            c1--;
            c2--;
        }
    }
    c1=c2=0;

    for(int i=0;i<v.size();i++)
    {

        if(v[i]==e)
            c1++;
        else if(v[i]==e2)
            c2++;
    }
    vector<int> ans;
    if(c1>v.size()/3)
        ans.push_back(e);
    if(c2>v.size()/3)
        ans.push_back(e2);
        return ans;
}

int main()
{

    int x,n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        v.push_back(x);
    }
    vector<int> ans;
    ans=ma(v);
    for(int i=0;i<ans.size();i++)
    {

        cout<<ans[i]<<" ";
    }

}
