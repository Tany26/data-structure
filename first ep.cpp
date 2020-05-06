#include<iostream>
#include<string.h>
using namespace std;
int fr(string str)
{

    int res=INT_MAX;
    int f[256];
    for(int i=0;i<256;i++)
        f[i]=-1;
    for(int i=0;i<str.length();i++)
    {

        if(f[str[i]]==-1)
            f[str[i]]=i;
        else
            res=min(res,f[str[i]]);

    }
    return (res==INT_MAX)?-1:res;
}
int main()
{

    string str;
    cin>>str;
    int ans=fr(str);
    cout<<str[ans];
    return 0;
}
