#include<stdio.h>
#include<stdlib.h>
struct clist
{
    int data; 
    struct clist *next;
};
typedef struct clist node;
void create(node* lst)
{
    node *new=lst;
    int size=0;
    printf("Enter size- ");
    scanf("%d", &size);
    while (size!=0)
    {
        scanf("%d",&lst->data);
        size--;
        if (size==0)
            break;
        lst->next=(node*) malloc(sizeof(node));
        lst=lst->next;
    }
    lst->next=new;
}
void print(node *lst)
{
    node *p,*q;
    p=NULL;
    q=lst;
    while(p!=q)
    {
        printf("%d ", q->data);
        q=q->next;
        p=lst;
    }
}
void insertbeg(node *lst)
{
    node * new,*head=lst;
    new=(node*)malloc(sizeof(node));
    printf("enter number to be inserted- ");
    scanf("%d", &new->data);
    new->next=lst;
    while(lst->next!=head)
    {
        lst=lst->next;
    }
    lst->next=new;
    head=new;
    print(head);
}
int main()
{
    node* head;
    head=(node*) malloc(sizeof(node));
    create(head);
    print(head); 
    insertbeg(head);
}