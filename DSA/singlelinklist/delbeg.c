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
void delbeg(node *lst)
{
    node *new;
    new=lst;
    lst=new->next;
    free(new);
    printf("\n");
    print(lst);
}
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    create(head);
    print(head);
    delbeg(head);
    return 0;
}