#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array- ");
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for (int j=1;j<size-i;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n", arr[i]);
                return ;
            }
        }
    }
    printf("Original array- ");
    for(int i=0;i<size;i++)
    {
        printf("%d, ", arr[i]);
    } 
    return 0;
}