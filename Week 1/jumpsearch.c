#include<stdio.h>
#include<math.h>
#define SIZE 100

int jumpSearch(int array[], int size, int key)
{
   int start = 0;
   int end = sqrt(size);
   int comp=0;

   while(array[end] <= key && end < size)
   {
      start = end;
      end += sqrt(size);
      if(end > size - 1)
         end = size;
   }

   for(int i = start; i<end; i++)
   {
      if(array[i] == key)
      {
          comp++;
          printf("Element present and comparison is = %d \n ",comp);
      }
      else
      {
          comp++;
           printf("not present and comparison = %d \n",comp);
      }

   }

}

int main()
{

   int n, searchKey, test,arr[SIZE];
   printf("Enter the number of test cases you want to try \n");
   scanf("%d",&test);
   for(int k=0;k<test;k++)
   {
     printf("Enter the number of elements you want \n");
     scanf("%d",&n);
     printf("Enter the elements of the array in sorted way \n");
     for(int i = 0; i< n; i++)
     {
       scanf("%d",&arr[i]);
     }

     printf("Enter search key to search in the array: ");
     scanf("%d",&searchKey);
     jumpSearch(arr, n, searchKey);
   }

}
