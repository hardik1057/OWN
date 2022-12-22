#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array- ");
    scanf("%d",  &size);
    int arr[size];
    for (int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<size-1;j++)
    {
        for (int i = 0; i < size-j-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i=0;i<size;i++)
    {
        printf("%d < ", arr[i]);
    }
    return 0;
}