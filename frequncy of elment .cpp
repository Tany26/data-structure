#include<iostream>
#include<hashtable.h>
using namespace std;
void fre(int a[],int n)
{

    unordered_map <int,int> mp;
    for(int i=0;i<n;i++)
    {

        mp(a[i])++;
    }
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl();

}
int main()
{

    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    fre(a,n);
    return 0;
}
