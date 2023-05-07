#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int i = 0, temp = 0,len = 0, j = 0;
    long decimalNumber = 0;
    char hexadecimal[100];

    printf("Enter Hexadecimal Number : ");
    gets(hexadecimal);

    len = strlen(hexadecimal);
    len--;

    for(j =0;j<strlen(hexadecimal)-1;j++)
    {
        if(isxdigit(hexadecimal[i])==0)
        {
            printf("\n");
            printf("Enter Number is Not Hexadecimal");
            return 0;
        }
    }

    while (hexadecimal[i]!='\0')
    {
       if(hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
       {
        temp = hexadecimal[i]-48;
       }
       else if(hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f'){
        temp = hexadecimal[i] - 97 + 10;
       }
       else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
       {
        temp = hexadecimal[i] - 65 + 10;
       }
       decimalNumber += temp * pow(16, len);
       len--;
       i++;
       
    }
    printf("\n Decimal number = %d", decimalNumber);
    return 0;
    
}