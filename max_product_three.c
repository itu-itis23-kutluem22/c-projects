#include <stdio.h>
//https://leetcode.com/problems/maximum-product-of-three-numbers/
int finding_maximum(int array[],int size){
    int max_value=array[0], max_num_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max_value)
        {
            max_value = array[i];
            max_num_index = i;
        }
    }
    array[max_num_index] = -32560;//bu kısıma daha güzel bir çözüm bulursan iyi olur
    return max_value;
}

int main(){
    int size_array;
    printf("enter size: ");
    scanf("%d",&size_array);
    if (size_array>=3)
    {
    int array[size_array];
    printf("enter elements: ");
    for (int i = 0; i < size_array; i++)
    {
        scanf("%d",&array[i]);
    }
    int max_numbers[3];
    for (int i = 0; i < 3; i++)
    {
        max_numbers[i] = finding_maximum(array,size_array);
    }
    int product  = 1;
    for (int i = 0; i < 3; i++)
    {
        product*=max_numbers[i];
    }
    printf("the maximum product of the array: %d",product);
    }
    else{
        printf("size of the array must be greater than or equal 3\n");
        main();
    }
    return 0;
}