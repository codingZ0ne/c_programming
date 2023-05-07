#include<stdio.h>
void main()
{
    int decimal = 0,modulus = 0, i =0;
    char hex[100];
    printf("Enter a Decimal Number : ");
    scanf("%d",&decimal);

    while (decimal!=0)
    {
        modulus = decimal % 16;
        if(modulus < 10)
        {
            modulus = modulus + 48;
        }else{
            modulus = modulus + 55;
        }

        hex[i++] = modulus;
        decimal = decimal/16;

    }
    printf("Hexadecimal value is = ");
    for(int j = i-1;j>0;j--){
        printf("%c",hex[j]);
    }
    
}