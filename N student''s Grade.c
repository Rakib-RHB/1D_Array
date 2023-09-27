#include <stdio.h>
int main()
{
    printf("N student's marks  Average measure Using For loop:\n\n");
    float a[100];
    int i;
    for(i=0; i <= 1000; i++)
    {


        scanf("%f",&a[i]);

        if ( a[i] < 0 || a[i] > 100)
        {
            // printf("Not Countable This Mark");
            break;
        }

       else  if ( a[i] <= 59)
        {
            printf("Grade is 'F'\n");
        }
        else if (a[i] >= 60 && a[i] <= 69)
        {
            printf("Grade is 'D'\n");
        }
        else if (a[i] >= 70 && a[i] <= 79)
        {
            printf("Grade is 'C'\n");
        }
        else if (a[i] >= 80 && a[i] <= 89)
        {
            printf("Grade is 'B'\n");
        }
        else if (a[i] >= 90 && a[i] <= 100)
        {
            printf("Grade is 'A'\n");
        }

    }
}
