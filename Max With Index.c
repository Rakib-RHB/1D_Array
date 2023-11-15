/* Take N students marks
as input and store them
in an array. Find
highest/lowest mark */

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
    int max = A[0],index = 0;
    for(i=0;i<n;i++)
    {
        if(max < A[i])
        {
            max = A[i];
            index = i;
        }

    }
    printf("Maximum : %d Found that : %d\n",max,index);




}
