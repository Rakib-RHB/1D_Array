#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[100] ;
    printf("Enter the string : ");
    gets(s1);
    //char s2[10]=" ";
    //strcpy(s2,s1);
    char s2[100]=" ";
    strcpy(s2,s1);
    puts(s1);
    char s = strrev(s1);
    //char s2[]="strrev(s1)";
    puts(s);
    int i,d;
    d = strcmp(s2,s);


    if(d == 0)
    {
        printf("Pallindrom");
    }
    else
    {
        printf(" not Pallindrom");
    }
    return 0;
}
