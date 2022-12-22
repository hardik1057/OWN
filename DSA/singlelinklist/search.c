#include <stdio.h>
#include<stdlib.h>
struct linklist 
{
    int data;
    struct linklist *next;
};
typedef struct linklist node;
void create (node *lst)
{
    int size;
    printf("sizee of ll- ");
    scanf("%d", &size);
    while (size!=0)
    {
        scanf("%d", &lst->data);
        size--;
        if (size==0)
            break;
        lst->next= (node *)malloc(sizeof(node));
        lst= lst->next;
    }
    lst->next=NULL;
}
void print(node *lst)
{
    while (lst!=NULL)
    {
        printf("%d ", lst->data );
        lst =lst->next;
    }
}
void search(node *lst)
{
    int key=0, cnt=0,flag=0;
    printf("\nEnter number to be searched- ");
    scanf("%d", &key);
    while (lst!=NULL)
    {
        cnt++;
        if(lst->data==key)
        {
            flag=1;
            printf("Found at index %d ", cnt);
            break;
        }
        lst=lst->next;
    }
    if (flag==0)
            printf("Not found");
}
int main()
{
    node *head;
    head=(node *)malloc (sizeof(node));
    create(head);
    print(head);
    search(head);
    return 0;
}
