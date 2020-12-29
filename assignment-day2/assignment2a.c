#include<stdio.h>
int delete_Element(int arr[],int del_element, int size);
int find_Element(int arr[],int del_element,int size);
void display(int arr[],int size);

void main()
{
    int size,del_element;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the element to be deleted: ");
    scanf("%d",&del_element);
    display(arr,size);
    size=delete_Element(arr,6,size);
    display(arr,size);

}

int delete_Element(int arr[],int del_element, int size)
{
    int pos;
    pos=find_Element(arr,del_element,size);
    if(pos==-1)
    {
        printf("element not found!");
        return size;
    }
   for (int i = pos; i < size-1; i++)
   {
       arr[i]=arr[i+1];
   }  
   --size; 
   return size;
}

int find_Element(int arr[],int del_element,int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==del_element)
        {
            return i;
        }
    }
    return -1;   
}

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}