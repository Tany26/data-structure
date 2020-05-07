#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(a,a%b);
}
int main()
{

    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;
}
