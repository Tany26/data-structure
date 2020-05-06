#include<iostream>
#include<stack>
using namespace std;
int  lpa(int a[],int n)
{

    stack <int> s;
    int res=0,tp,curr;
    for(int i=0;i<n;i++)
    {

        while(s.empty()==false && a[s.top()]>=a[i])
        {
            tp= s.pop();
            curr=a[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(res,curr);

        }
        s.push(i);

    }
    while(!s.empty())
    {
        tp=s.pop();
        curr=a[tp]*(s.empty()?n:(n-s.top()-1));
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=lpa(a,n);
    cout<<res<<" ";
    return 0;

}
