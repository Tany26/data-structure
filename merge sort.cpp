#include<iostream>
using namespace std;
int c(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=a[l+i];
    for(int i=0;i<n2;i++)
        right[i]=a[m+1+i];
    int res=0;
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[i])
        {
            a[k]=left[i];
            i++;

        }
        else
        {
            a[k]=right[j];
            j++;
            res+=n1-i;
        }
        k++;

    }
    while(i<n1)
    {

        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    return res;

}
int main()
{
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    int l=n/2;
    int r=n/2;
    int ans=c(a,l,n,r);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
