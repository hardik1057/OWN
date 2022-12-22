#include<stdio.h>
#include<stdlib.h>
struct clist
{
    int data;
    struct clist *next;
};
typedef struct clist node;
void create(node *lst)
{
    node *new=lst;
    int size;
    printf("Enter size of list- ");
    scanf("%d", &size);
    while (size!=0)
    {
        scanf("%d", &lst->data);
        size-- ; 
        if(size==0)
            break;
        lst->next=(node* )malloc(sizeof(node));
        lst=lst->next;
    }
    lst->next=new;
}
void print(node *lst)
{
   node *p=NULL,*q=lst;
   while(p!=q)
   {
        printf("%d ", q->data);
        q=q->next;
        p=lst;
   }
}
void insertend(node *lst)
{
    node *new ,*temp=lst; 
    new=(node*)malloc(sizeof(node));
    printf("Enter number to be inseted- ");
    scanf("%d", &new->data);
    new->next=new;
    while(lst->next!=temp)
    {
        lst=lst->next;
    }
    lst->next=new;
    new->next=temp;
    print(temp);
}
int main()
{
    node* head;
    head=(node*) malloc(sizeof(node));
    create(head);
    print(head); 
    insertend(head); 
    return 0;
}