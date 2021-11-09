#include<stdio.h>
#define SIZE 100
int binarySearch(int arr[], int first, int last, int k)
{
    int mid;
    if(last >= first)
    {
        mid = (first + last)/2;
        if(arr[mid] == k)
        {
            return mid+1;
        }
        else if(arr[mid] < k)
        {
            return binarySearch(arr,mid+1,last,k);
        }
        else
        {
            return binarySearch(arr,first,mid-1,k);
        }

    }
    return -1;
}
int main()
{
    int n,i,k,arr[SIZE],location=-1;
    printf("Enter the no of elements you want\n");
    scanf("%d",&n);
    printf("Enter the array elements\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search\n ");
    scanf("%d",&k);
    int first=0,last=n-1;
    location=binarySearch(arr,first,last,k);
    if(location != -1)
    {
        printf("Element found at location %d\n",location);
    }
    else
    {
        printf("\nElement not found");
    }


}
