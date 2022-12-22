#include <stdio.h>
#include <stdlib.h>
struct linklist
{
    int data;
    struct linklist *next;
};
typedef struct linklist node;
void create(node *lst)
{
    int size;
    printf("enter size of ll-");
    scanf("%d", &size);
    while (size != 0)
    {
        scanf("%d", &lst->data);
        size--;
        if (size == 0)
            break;
        lst->next = (node *)malloc(sizeof(node));
        lst = lst->next;
    }
    lst->next = NULL;
}
void print(node *lst)
{
    while (lst != NULL)
    {
        printf("%d  ", lst->data);
        lst = lst->next;
    }
}
void insertkey(node *lst, int key)
{
    int insert;
    printf("Enter value to be inserted- ");
    scanf("%d", &insert);
    node *new=(node*)malloc(sizeof(node));
    new->data=insert;
    new->next=NULL;
    node *temp=(node* )malloc (sizeof(node));
    temp=lst;
    if(temp->data==key)
    { 
        temp->next= new;
        temp=new;
    }
    else 
    {
        while(temp->next!=NULL)
        {
            if(temp->data==key)
            {
                new->next=temp->next;
                temp->next= new;
                break;
            }
            temp=temp->next;
        }
    }
    print(lst);
}
int main()
{
    int key;
    node *head;
    head = (node *)malloc(sizeof(node));
    create(head);
    print(head);
    printf("enter key value- ");
    scanf("%d", &key);
    insertkey(head,key);
    return 0;
}