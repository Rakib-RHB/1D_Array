#include<stdio.h>
int main()
{
    int m[3][4],i,j;
    int max = m[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int n,count;
    printf("Which Number ! ");
    scanf("%d",&n);
     for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(n == m[i][j])
            {
                count++;
            }
        }
    }
    printf("The number is %d times \n",count);
}

