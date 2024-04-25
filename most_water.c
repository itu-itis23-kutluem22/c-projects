#include <stdio.h>
#include <math.h>
//https://leetcode.com/problems/container-with-most-water/description/
int main(){
    int size, highest = 0, temp;
    printf("enter size: ");
    scanf("%d",&size);
    int water[size];
    printf("enter the element of the water: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&water[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (water[i]<water[j])
            {
                temp = water[i] * abs(j - i);
                if (temp > highest)
                {
                    highest = temp;
                }
            }
            else
            {
                temp = water[j] * abs(j - i);
                if (temp > highest)
                {
                    highest = temp;
                }    
            }
        }
    }
    printf("the max are of the water is %d",highest);
    return 0;
}