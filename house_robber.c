#include <stdio.h>
//https://leetcode.com/problems/house-robber/
int main(){
    int size, highest_odd=0, highest_even=0;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i+=2)
    {
        highest_even+=array[i];
    }
    for (int i = 1; i < size; i+=2)
    {
        highest_odd+=array[i];
    } 
    if (highest_even<highest_odd)
    {
        printf("%d",highest_odd);
    }
    else
    {
        printf("%d",highest_even);
    }
    
}