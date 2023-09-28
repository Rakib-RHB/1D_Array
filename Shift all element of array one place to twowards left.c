#include<stdio.h>
int main()
{

    int n,i,j,l;
    printf("Take N number of input : ");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int t = a[0];
    for(j = 0; j < n-1; j++)
    {
        a[j] = a[j + 1];
    }
    a[n-1] = t;
    printf("The first element will go to the last place : ");
    for ( l = 0; l < n; l++)
    {
        printf("%d ",a[l]);
    }
printf("\n");

}
