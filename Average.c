/*  Take N students’ marks as input and store
them in an array. Find average mark. N will also be input. */


#include<stdio.h>
int main()
{
    int i;
    printf("How Many Student  :  ");
    float n,sum = 0;
    scanf("%f",&n);
    float mark[100];
    for(i = 0 ;i < n;i++)
    {
        scanf("%f",& mark[i]);
        sum = sum + mark[i];
    }
    float avg = sum/n;
    printf("Sum : %.2f\n",sum);
    printf("Average :%.2f",avg);
    return 0;

}

