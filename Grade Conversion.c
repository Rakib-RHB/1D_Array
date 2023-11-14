/* Take N students marks as input and store
them in an array. Find grade of each student. The following
chart will be used for a quick grade conversion in C
programming language course:
90-100 A
80-89 B
70-79 C
60-69 D
0-59 F  */


#include<stdio.h>
int main()
{
    int n,i;
    printf("How Many Student  : ");
    scanf("%d",&n);
    printf("-------------------------\n");
    float mark[n],m;
    char grade[n],g;
    printf("Enter Mark : ");
    for(i = 0; i<n ; i++)
    {
        scanf("%f",&mark[i]);
    }
    for(i=0; i<n; i++)
    {
        m = mark[i];
        if(m >=90)
        {
            g='A';
        }
        else if(m>=80)
        {
            g='B';
        }
        else if(m>=70)
        {
            g='C';
        }else if(m>=60)
        {
            g='D';
        }
        else
        {
            g='F';
        }

        grade[i] = g;
    }
    for(i = 0;i < n;i++)
    {
        printf("Mark : %.2f \tGrade : %c\n",mark[i],grade[i]);
    }
}

