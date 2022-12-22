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
    for(int i=0;i<size-1;i++)
    {
        int key = arr[i];
        j=i-1;
        while (j >= 0 && arr[j] > key)
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j=j-1;
        }
        arr[j+1]=key;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d < ", arr[i]);
    }
    return 0;
}