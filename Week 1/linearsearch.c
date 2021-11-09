#include<stdio.h>
#define SIZE 100
void linearsearch(int arr[],int n,int k)
{
    int flag=0,comp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=1;
            comp++;
            break;
        }
        else
        {
            comp++;
        }
    }
    if(flag==1)
    {
        printf("Element found in the array and number of comparison are : %d\n",comp);
    }
    else
    {
       printf("\nElement not found in the array and number of comparison are : %d",comp);
    }

}
int main()
{
    int test,n,k,arr[SIZE];
    printf("Enter the number of test cases\n");
    scanf("%d",&test);
    for(int i=0;i<n;i++)
    {
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        printf("Enter the elements in the array\n");
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("Enter the element you want to search\n");
        scanf("%d",&k);
        linearsearch(arr,n,k);
    }
    return 0;
}
