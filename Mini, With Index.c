/* Find the minimum number (and its index)
in an array of unsorted integers
find_minimum_and_index. */

#include<stdio.h>
int main()
{
    int n,i,x;
    printf("How Many Number : ");
    scanf("%d",&n);
    int A[n];
    for(i = 0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int min = A[0],index = 0;
    for(i=0;i<n;i++)
    {
        if(min > A[i])
        {
            min = A[i];
            index = i;
        }

    }
    printf("Minimum : %d Found that : %d\n",min,index);




}
