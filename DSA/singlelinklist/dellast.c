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
void dellast(node *lst)
{
    node *new, *temp=lst;
    while(lst->next!=NULL)
    {
        new=lst;
        lst=lst->next;
    }
    new->next=NULL;
    free(lst);
    printf("\n");
    print(temp);
}
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    create(head);
    print(head);
    dellast(head);
    return 0;
}