#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;

void print_ll()
{
    if(head==NULL)
        cout<<"Linked List is empty..!!"<<endl;
    else
    {
        struct node *t = head;
        while(t!=NULL)
        {
            (t->link==NULL)?cout<<t->data:cout<<t->data<<" -> ";
            t=t->link;
        }
    }
}

void insert_end(int d)
{
    struct node *next = (struct node*)malloc(sizeof(struct node));
    next->data = d;
    next->link = NULL;
    if(head==NULL)
        head=next;
    else
    {
        struct node *t = head;
        while(t->link!=NULL)
            t = t->link;
        t->link = next; 
    }
}

void insert_front(int d)
{
    struct node *next = (struct node*)malloc(sizeof(struct node));
    next->data = d;
    next->link = NULL;
    if(head==NULL)
        head=next;
    else
    {
        next->link = head;
        head = next;
    }
}

void insert_middle(int n,int d)
{
    struct node *next = (struct node*)malloc(sizeof(struct node));
    next->data = d;
    next->link = NULL;
    if(head==NULL)
        head=next;
    else
    {
        struct node *t = head;
        while(t->data!=n)
            t=t->link;
        next->link = t->link;
        t->link = next;
    }
}

int main(){
    insert_front(1);
    insert_end(10);
    insert_end(11);
    insert_middle(10,6);
    print_ll();
    return 0;
}