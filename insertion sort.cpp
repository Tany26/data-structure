#include<iostream>
using namespace std;
void inser(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{

    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    inser(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
