/*  : Take N numbers as input and store them
in an array. Shift all elements of the array one place
towards left. The first element will go to the last place.  */



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
    int t = A[0];
    for(i =0;i<n-1;i++)
    {
        A[i] = A[i+1];
    }
    A[n-1] = t;
    printf("Array Ellement After left rotation : \n");
    for(i = 0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }


}

