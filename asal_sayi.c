#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0, mod, flag;
    printf("n degerini giriniz: ");
    scanf("%d",&n);
    
    for (int i = 2; i < n; i++)
    {
        mod = n % i;
        if (mod == 0)
        {
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
    }
    
    flag ? printf("your number is prime"):printf("your number is not prime");
    
    return 0;
}
