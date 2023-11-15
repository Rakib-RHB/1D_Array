/* Take N numbers as input and store them in
an array. Print all odd numbers in the array.*/


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
    printf("Total Odd : ");
    for(i=0;i<n;i++)
    {
        x = A[i];
        if(x%2==1)
        {
            printf("%d ",x);
        }
    }
}
