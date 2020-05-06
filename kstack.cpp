#include<iostream>
#include<stack>
using namespace std;
struct kstack{
int *a,*tap,*next;
int k,ft,cap;
kstack(int k1,int n)
{

    k=k1;
    cap=n;
    a=new int[cap];
    tap=new int[k];
    next=new int[cap];
    for(int i=0;i<cap;i++)
        tap[i]=-1;
    ft=0;
    for(int i=0;i<cap-1;i++)
        next[i]=i+1;
    next[cap-1]=-1;

}
};
int main()
{
    return 0;
}
