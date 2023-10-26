#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter the string :");
    gets(str);
    int i,ch,c;
    i=0;
    c = 0;



    while((ch = str[i]) != '\0')
    {
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        {
            c++;
            printf("The lowercase Vowel is : %c\n\n",ch);

        }


        else if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            c++;

            printf("\nThe uppercase Vowel is : %c\n\n",ch);
        }

        i++;
    }

    printf(" Vowel is : %d\n",c);



    return 0;

}
