#include <stdio.h>
#include<stdlib.h>
struct linklist
{
    int data;
    struct linklist *next;
};
typedef struct linklist node;
void create(node *lst)
{
    int size;
    printf("Enter size of ll- ");
    scanf("%d", &size);
    while (size!=0)
    {
        scanf("%d",&lst->data);
        size--;
        if (size==0)
            break;
        lst->next=(node *)malloc(sizeof(node));
        lst=lst->next;
    }
    lst->next=NULL;
}
void print(node *lst)
{
    while (lst!=NULL)
    {
        printf("%d ", lst->data);
        lst=lst->next;
    }
}
void insertstart(node *lst, int no)
{
    node *ptr= (node *)malloc(sizeof(node));
    ptr->data=no;
    ptr->next=lst;
    lst=ptr;
    print(lst);
}
int main()
{
    int key=0;
    node *head;
    head=(node *)malloc(sizeof(node));
    create(head);
    print(head);
    printf("Enter number to be inserted- ");
    scanf("%d",&key);
    insertstart(head,key);
    return 0;
}
