#include<iostream >
#include<string.h>
using namespace std;
int Em=-1;
int index=0;
Node * deserlize(vector<int>&a)
{
    if(index==a.size())
        return NULL;
    int val=arr[index];
    index++;
    if(val==Em)
        return NULL;
    Node *root=newNode(val);
    root->left=deserlize(a);
    root->right=deserlize(a);
    return root;

}
void serlize(vector<int>&a,Node *root)
{

    if(root==NULL)
    {

        a.push_back(Em);
        return;
    }
    a.push_back(root->data);
    serlize(root->left,a);
    serlize(a,root->right);
}
