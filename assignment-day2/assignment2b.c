#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    
    int size,n_times;

    size=sizeof(arr)/sizeof(arr[0]);

    printf("enter how many times you want to left rotate the array: ");
    scanf("%d",&n_times);

    printf("orginal array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n_times; i++)
    {
        int j,first;
        first=arr[0];
        for ( j = 0; j < size-1; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=first;
    }
    printf("after rotation:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }   
}