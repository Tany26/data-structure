#include<iostream>
using namespace std;
int main()
{

    int n,i,j;
    cin>>n;
    cout<<"*";
    for(i=0;i<(n-3)/2;i++)
         cout<<" ";

    for(i=0;i<(n+1)/2;i++)
         cout<<"*";
         cout<<endl;
    for(i=0;i<(n-3)/2;i++)
    {

    cout<<"*";

    for(j=0;j<(n-3)/2;j++)
         cout<<" ";

    cout<<"*";
    cout<<endl;
    }
    for(i=0;i<n;i++)
        cout<<"*";
    cout<<endl;
    for(j=0;j<(n-3)/2;j++)
    {

        for(i=0;i<(n-3)/2+1;i++)
            cout<<" ";

    cout<<"*";

        for(i=0;i<(n-3)/2;i++)
            cout<<" ";

    cout<<"*";
    cout<<endl;

    }

        for(i=0;i<(n+1)/2;i++)
            cout<<"*";


        for(i=0;i<(n-3)/2;i++)
            cout<<" ";
    cout<<"*";
    return 0;

}
