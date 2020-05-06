#include<iostream>
#include<string.h>
using namespace std;
string per(string str1,string str2)
{

    int c1[256]={0},c2[256]={0};
    int i;
    for(i=0;i<str2.lenght();i++)
    {
        c1[str1[i]]++;
        c2[str2[i]]++;
    }
    for(i=str2.lenght();i<str1.lenght();i++)
    {

        if(c1[str1[i]]==c2[str2[i]])
            return "yes";
        c1[str[i]]++;
        c1[str[i]-str2.lenght()];

    }
    return "no";
}
int main()
{

    string str1,str2;
    cin>>srt1;
    cin>>str2;
    string res=per(str1,str2);
    cout<<res<<" ";
    return 0;
}
