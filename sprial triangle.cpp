#include<iostream>

using namespace std ;

int spiral(int a[][],int r,int c);



int main()
{
    int a[1000][1000],r,c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<a[i][j];
    }
    spiral(a,r,c);
    return 0;
}
int spiral(int a[][],int r,int c)
{

    if(r==1)
    {
        for(int i=0;i<r;i++)
            cout<<a[i][i]<<" ";
    }
      if(c==1)
    {
        for(int i=0;i<c;i++)
            cout<<a[i][i]<<" ";
    }
    else{
        int top=0,left=0,buttom=r-1,right=c-1;
        while(top<=buttom&&left<=right)
        {

            for(int i=left;i<=right;i++)
                cout<<a[top][i]<<" ";
            top++;

            for(int i=top;i<=buttom;i++)
                cout<<a[i][right]<<" ";
            right--;
            if(top<=buttom)
            {
                for(int i=right;i>=left;i++)
                    cout<<a[buttom][i]<<" ";
                buttom--;

            }
            if(left<=right)
            {
                for(int i=buttom ;i>=top;i++)
                    cout<<a[i][left]<<" ";
                left++;
            }

        }
    }
    return 0;
}
