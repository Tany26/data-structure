#include<iostream>
using namespace std;
void clone(Node *h1)
{
    Node *curr=h1;
    Node * next =NULL;
    for(curr=h1;curr!=NULL;)
    {
        next=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    for(curr=h1;curr!=NULL;curr=curr->next->next)
    {
        cout<< curr->next->random=(curr->random!=NULL)?curr->random->next:NULL<<endl;

    }
}
int main()
{


    return 0;
}
