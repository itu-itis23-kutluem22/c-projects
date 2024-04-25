#include <stdio.h>

int main(){
    int array[6] = {1, 3, 2, -1, -3 -2};
    int number = 0,remainder = 0, sum = 0, divisiblity_control = 0, pumber = 0, variable = 0;
    printf("enter a number: ");
    scanf("%d",&number);
    pumber = number;

    for (int i = 0; i < 6; i++)
    {
        remainder = number % 10;
        variable = remainder * array[i];
        sum+=variable;
        number = number / 10;
    }

    if (sum < 0)
    {
        do
        {
            sum+=7;
        } while (sum<0);
        divisiblity_control = sum % 7;
        if (divisiblity_control == 0)
        {
            printf("The number %d is divisible by 7. Because the remainder is 0.",pumber);
        }
        else
        {
            printf("The number %d is not divisible by 7. Because the remainder is %d.",pumber,divisiblity_control);
        }
    }

    else{
        divisiblity_control = sum % 7;
        if (divisiblity_control == 0)
        {
            printf("The number %d is divisible by 7. Because the remainder is 0.",pumber);
        }
        else
        {
            printf("The number %d is not divisible by 7. Because the remainder is %d.",pumber,divisiblity_control);
        }
    }

    return 0;
}