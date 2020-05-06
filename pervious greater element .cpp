#include<iostream>
#include<stack>
using namespace std;
void next(int a[],int n)
{

    stack<int> s;
    s.push(a[0]);

    for(int i=0;i<n;i++)
    {

        while(!s.empty()&& s.top()<=a[i])
        {
            s.pop();
        }
        int nextg=(s.empty())?-1:s.top();
        cout<<nextg<<endl;
        s.push(a[i]);
    }
}
int main()
{

    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    next(a,n);
    return 0;

}
