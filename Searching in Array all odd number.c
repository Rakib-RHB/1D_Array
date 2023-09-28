#include <stdio.h>
int main()
{
    int n,i,j;
    int ary[200];
    for(n = 0; n < 200; n++)
    {
        printf(" Enter the Value : ");
        scanf("%d",&ary[n]);
        if(ary[n] < 0)
        {
            printf("The value is not counted\n");
            break;
        }
        else
        {
            for(i = 1; i <= ary[n]; i++)
            {
                if(i % 2 !=0)

                {
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
