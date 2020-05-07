#include<iostream>
using namespace std;
int c(int a[],int l,int m,int r);
int inver(int a[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        res+=inver(a,l,m);
        res+=inver(a,m+1,r);
        res+=c(a,l,m,r);
    }

        return res;
}
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
    int l=0,m=n-1;
    int ans=inver(a,l,m);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

