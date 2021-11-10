#include <stdio.h>
int main()
{
    int n, i, j, temp,comp=0,no_swap=0,test;
    int arr[64];
    printf("Enter the test case you want \n");
    scanf("%d",&test);
    for(int k=0;k<test;k++)
    {
        printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
	    comp++ ;
            while ( j > 0 && arr[j-1] > arr[j])
            {
                if(arr[j-1]>arr[j])
                {
                    comp++;
                }
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
                no_swap++;
            }
    }
    printf("number of swaps = %d  \n",no_swap);
    printf("number of comparisions = %d  \n", comp);
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    }
    return 0;
}
