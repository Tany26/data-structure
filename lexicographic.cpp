
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int lex(string str)
{

    int res=1,n=str.length(),mal=fact(n);
    int c[256]={0};
    for(int i=0;i<n;i++)
    {

        c[str[i]]++;
    }
    for(int i=0;i<n;i++)
        c[i]=c[i]+c[i+1];
    for(int i=0;i<n;i++)
    {

        mal=mal/(n-i);
        res=res+c[str[i]]*mal;
        for(int j=str[i];j<256;j++)
            c[j]--;
    }
    return res;
}
int main()
{

    string str;
    cin>>str;
    int ans=lex(str);
    cout<<ans;
    return 0;
}
