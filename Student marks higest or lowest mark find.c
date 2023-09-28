#include <stdio.h>
int main ()
{
    int i,n,j,m,o;
    printf("Take total Number of Student : ");
    scanf("%d",&n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(m = 1; m < n; m++)
    {
        if(max < a[m])
        {
            max = a[m];
        }
        if(min > a[m])
        {
            min = a[m];
        }

    }
    printf("The maximum value is : %d\n",max);
    printf("The maximum value is : %d\n",min);


    printf("Using extra for loop Measure only Minimum Value\n");



    for(o = 1; o < n; o++)
    {
        if(min > a[o])
        {a
            min = a[o];
        }

    }
    printf("The lowest value is : %d\n",min);


}
