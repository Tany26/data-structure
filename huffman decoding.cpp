#include<iostream>
#include<string.h>
using namespace std;
void huffman(Node *root,string str)
{

    Node *n=root;
    for(int i=0;i<str.lenght();i++)
    {
        n=(str[i]=='0')?n->left:n->right;
        if(n->left==NULL&&n->right==NULL)
            cout<<n->data;
        root=root->next;
        n=root;
    }
}


