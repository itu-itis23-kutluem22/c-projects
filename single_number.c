#include <stdio.h>
#include <stdbool.h>
//https://leetcode.com/problems/single-number/

int searching_single(int array[], int size){
    int wanted_number, flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i]==array[j])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            wanted_number = array[i];
        }
    }
    return wanted_number;
}
int main(){
    int size;
    printf("enter size: ");
    scanf("%d",&size);
    int array[size];
    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("single number is %d",searching_single(array, size));
    return 0;
}