#include<stdio.h>
#include<string.h>
int i=0;
void convert (char s [])
{
        for (i=0; i<strlen(s); i++)
        {
                if(s[i]>=65&&s[i]<=91)
                s[i]=s[i]+32;
        }
}
void main ()
{
        char string [100];
        printf ("Enter an Uppercase String\n");
        scanf ("%[^\n]%*c", string);
        convert (string);
        printf ("%s\n", string);
}
