#include <stdio.h>
int main()
{
    printf("Array declairation First way\n");
    char ai[] = {'a','b','c'};
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%c ",ai[i]);
    }
    printf("\n");


    printf("Array declaration second way\n");
    int a[6]= {1,2,3,4,5,6};
    int j =0;
    while( j <6)
    {
        printf("%d ",a[j]);
        j++;
    }


    printf("\n");
    printf("\n");
    printf("Array declaration Third way using While Loop\n");
    printf("\n");
    printf("Enter the Array value :\n ");


    int b[7];
    int l = 0;
    while(l < 7)

    {
        scanf("%d",&b[l]);
        l++;
    }
    int m=0;

    printf("The result is : ");

    while(m < 7)
    {
        printf("%d ",b[m]);
        m++;
    }
    printf("\n");
    printf("\n");

    printf("Array declaration Third way using for Loop\n");
    int c[7];
    int I, J;
    printf("Enter the Array value:\n");
    for(I = 0; I < 7; I++)
    {
        scanf("%d",&c[I]);

    }
        printf("The result is : ");

    for(J = 0; J < 7; J++)
    {
        printf("%d ",c[J]);
    }
}
