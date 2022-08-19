#include <string.h>
#include <stdio.h>
int main()
{   
    char st[100];  
    int i;
 
    printf("Enter  the string : ");
    gets(st);
         
    for(i=0;st[i];i++)  
    {
        if(st[i]>=65 && st[i]<=90)
         st[i]+=32;
 	}
    
    printf("String in lowercase ='%s'\n",st);
    return 0;
}