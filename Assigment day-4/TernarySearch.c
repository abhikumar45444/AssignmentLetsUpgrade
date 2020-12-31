#include<stdio.h>
int Ternary_Search(int arr[],int r, int l, int key);

void main()
{
 int arr[]={1,2,3,4,5,6,7,8,8,9,10,11,12};
 int size,key,result;
 size=sizeof(arr)/sizeof(arr[0]);
 key=10;
 result=Ternary_Search(arr,size-1,0,key);
 if (result==-1)
 {
    printf("element not found!");
 }
 else
 {
     printf("element found at tghe index: %d",result);
 }
 
 
}

int Ternary_Search(int arr[],int r, int l, int key)
{
    while(r>=l){
   int mid1=l+(r-l)/3;
   int mid2=r-(r-l)/3;
    if (arr[mid1]==key)
    {
        return mid1;
    }
    if (arr[mid2]==key)
    {
        return mid2;
    }
     if (key<arr[mid1])
     {
        r=mid1-1;
     }
     else if(key>arr[mid2])
     {
         l=mid2+1;
     }
     else
     {
         l=mid1+1;
         r=mid2-1;
     }
    }
    return -1;
}