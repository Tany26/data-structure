#include<iostream>
#include<stack>
using namespace std;
void span(int a[],int n)
{

    stack<int>s;
    s.push(0);
    for(int i=0;i<n;i++)
    {

        while(!s.empty()&&a[s.top()]<=a[i])
            s.pop();
        int spa=(s.empty())?(i+1):(i-s.top());
        cout<<spa<<endl;
        s.push(i);
    }
}
int main()
{
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    span(a,n);
    return 0;
}
