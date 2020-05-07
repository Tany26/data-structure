#include<iostream>
using namespace std;
int zero(int n)
{
    int res=0,p=5;
    while(n/p>0)
    {
        res+=(n/p);
        p=p*5;

    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int ans=zero(n);
    cout<<ans;
    return 0;
}
