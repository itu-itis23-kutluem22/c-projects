#include <stdio.h>

int main(){
    int num = 0, sum = 0, digit = 0, vicit = 0, pum = 0;
    printf("enter the number: ");
    scanf("%d",&num);
    pum = num;
    while(num>0){
        vicit = num % 10;
        num = num / 10;
        digit = num % 10;
        digit = digit * 2;
        if (digit > 9)
        {
            digit = digit - 9;
        }
        sum += vicit + digit;
        num = num / 10;
    }
    sum = sum % 10;
    num = pum*10 + sum;
    printf("generated barcode number is: %d",num);

    return 0;
}