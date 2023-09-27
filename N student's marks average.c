#include <stdio.h>
int main()

{
    printf("N student's marks  Average measure Using For loop:\n\n");
    printf("N student's marks :\n");
    float m[5];
    float m1[5];
    float sum1 = 0;
    float sum2 = 0;
    int N;
    for(N = 0; N < 5; N ++)
    {
        scanf("%f",&m[N]);
        sum1 = sum1 + m[N];
    }
    float avg1 = sum1 / 5;
    printf("Average is : %.2f",avg1);


    printf("\n");
    printf("\n");


    printf("N student's marks  Average measure Using While loop:\n\n");

    int i = 0;
    printf("N student's marks :\n");

    while(i < 5)
    {
        scanf("%f",&m1[i]);
        sum2 = sum2 + m1[i];
        i++;
    }
    float avg2 = sum2 / 5;
    printf("Average is : %.2f",avg2);




}
