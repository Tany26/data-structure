#include<iostream>
#include<math.h>
using namespace std;
void maxsub(int a[],int k,int n)
{
    deque <int> dq;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty()&&a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back();
    }
    for(int i=k;i<n;i++)
    {

        cout<<a[dq.front()]<<" ";
        while(!dq.empty()&&dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty()&&a[i]>=a[dq.back()])
            dq.pop_back();
        dq.push_back();
    }
    cout<<a[dq.front()]<<" ";
}
int main()
{
    int a[100],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    maxsub(a,k,n);


    return 0;
}
