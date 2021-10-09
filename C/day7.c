#include<stdio.h>
int main()
{
   int array[10000], N;
   scanf("%d",&N);
   for (int i = 0; i <=N; i++)
   {
       scanf("%d",&array[i]);
   }
   
   for (int i = N; i>=0; i--)
   {
       printf("%d ",array[i]);
   }
   
   

    return 0;
}