#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("enter the element of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    int lowest = array[0], highest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (lowest>array[i])
        {
            lowest = array[i];
        }
        if (array[i]>highest)
        {
            highest = array[i];
        }
    }
    int disappeared_array[highest - lowest - size], found = 0, sayac = 0;
    for (int i = lowest; i < highest; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == array[j])
            {
                sayac = 1;
                break;
            }
            else{
                sayac = 0;
            }
        }
        if (sayac == 0)
        {
            disappeared_array[found] = i;
            found++;
        }
    }
    for (int i = 0; i < found; i++)
    {
        printf("%d |",disappeared_array[i]);
    }
    return 0;
}