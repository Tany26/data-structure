#include<iostream>
#include<string.h>
using namespace std;
string ana(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return "no";
    int c[256]={0};
    for(int i=0;i<s1.length();i++)
        c[s1[i]]++;

    for(int i=0;i<s2.length();i++)
        c[s2[i]]++;
    for(int i=0;i<256;i++)
        if(c[i]!=0)
        return "no";
    return "yes";
}
int main()
{

    string str1,str2;
    string ans;
    cin>>str1;
    cin>>str2;
    ans=ana(str1,str2);
    cout<<ans;
    return 0;
}
