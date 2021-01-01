#include<stdio.h>
void Insertion_Sort(int arr[],int n);
void Display(int arr[], int n);

int main(){
int arr[]={3,4,6,2,5,7,8,1,10,19,15,14,13};
int n=sizeof(arr)/sizeof(arr[0]);
printf("Before sorting:\n");
Display(arr,n);
Insertion_Sort(arr,n);
printf("After sorting:\n");
Display(arr,n);
}

void Insertion_Sort(int arr[], int n)
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }  
}

void Display(int arr[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}