#include <stdio.h>
#include <stdbool.h>
//https://leetcode.com/problems/single-number-ii/description/
int main(){
    int size, value, sayac = 1, wanted_element, flag = 0;
    printf("enter size: ");
    scanf("%d",&size);
    int array[size];
    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]==array[j])
            {
                sayac++;
            }  
        }
        if (sayac == 3)
        {
            value = array[i];
            break;
        }
        sayac = 0;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]==array[j])
            {
                array[j]=value;
                flag = 1;
            }  
        }
        if (flag == 1)
        {
            array[i]=value;
            flag = 0;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i]!=value)
        {
            wanted_element=array[i];
        }
    }
    printf("the single value is %d",wanted_element);
    return 0;
}