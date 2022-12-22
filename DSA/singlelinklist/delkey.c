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
void delkey(node **lst)
{
    node *temp = *lst;
    int key,flag=1;
    printf("Enter number to be deleted- ");
    scanf("%d", &key);
    if(temp->data==key)
    {
        free(temp);
        *lst=NULL;
        print(*lst);
    }
    else
    {  
        while(temp!=NULL)
        {
            if(temp->next->data==key)
            {
                flag=0;
                node *f=temp->next;
                temp->next=temp->next->next;
                free(f);
                break;  
            }
            temp=temp->next;
        }
        if (flag==1)
            printf("Not found");
        print(*lst);
    }
}
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    create(head);
    print(head);
    delkey(&head);
    return 0;
}