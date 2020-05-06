#include<iostream>
#include<string.h>
using namespace std;
void full(string str,int lps[]);
void rep(string pat,string txt,int m,int n)
{
    int lps[m];
    full(pat,lps);
    int i=0,j=0;
    while(i<n)
    {

        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<i-j;
            j=lps[j-1];
        }
        else if(i<n&&pat[j]!=txt[i])
        {

            if(j==0)
                i++;
            else
                j=lps[j-1];
        }
    }


}

void full(string str,int lps[])
{
    int n=str.length();
    int len=0;
    lps[0]=0;
    int i=1;
while(i<n)
{

    if(str[i]==str[len])
    {
        len++;
        lps[i]=len;
        i++;
    }
    else
    {

        if(len==0)
        {

            lps[i]=0;
            i++;
        }
        else
            len=lps[len-1];
    }
}
}
int main()
{

    string str,txt;
    int m,n;
    cin>>str;
    cin>>txt;
    m=str.length();
    n=txt.length();
    rep(str,txt,m,n);
    return 0;

}
