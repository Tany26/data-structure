#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int lon(string str)
{
    int res=0,maxend=0;
    int n=str.length();
    vector<int> prev(256);
    for(int k=0;k<256;k++)
        prev[k]=-1;
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,prev[str[i]]+1);
        maxend = j-i+1;
        res=max(res,maxend);
        prev[str[i]]=j;
    }
    return res;
}
int main()
{
    string str;
    cin>>str;
    int ans=lon(str);
    cout<<ans;
    return 0;
}
