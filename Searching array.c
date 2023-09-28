#include<stdio.h>
#define n 12
int main()
{
     int a[n]={1,2,3,4,5,6,7,8,9,0};
     int ter,i,ind;
     ind = -1;
     printf("Enter terget : ");
     scanf("%d",&ter);
     for (i = 0; i < n; i++)
     {
         if(a[i] == ter)
         {
             ind = i;
             break;
         }
         else if( a[i] > ter)
         {
             break;
         }
     }
     if(ind == -1)
     {
         printf("Terget Not Found");
     }
     else
     {
         printf("Terget found at index : %d\n",ind);
     }
}
