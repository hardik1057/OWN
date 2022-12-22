#include<stdio.h>
int main()
{
    int size, j;
    printf("Enter size of array- ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<size;i++)
    {
        int key=i;
        for (j=i+1;j<size;j++)
        {
            if(arr[j]<arr[key])
                key=j;
            if(key!=i)
            {
                int temp=arr[key];
                arr[key]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d < ", arr[i]);
    }
    return 0;
}