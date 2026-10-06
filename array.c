#include<stdio.h>

void main()
{
  int arr[20],i,n;

   printf("Enter no of elements in array :");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
    printf("Enter Elements :");
    scanf("%d",&arr[i]);
   }

  printf("The array :");

  for(i=0;i<n;i++)
  {
    printf("\n %d",arr[i]);
  }

}
