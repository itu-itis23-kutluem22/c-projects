#include <stdio.h>
//https://leetcode.com/problems/plus-one/description/
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
        if (array[0]==0)
        {
            printf("first digit cannot be 0.");
            return 0;
        }
    }
    if (array[size-1]<9)
    {
        array[size-1]++;
    }
    else if (array[size-1]==9)
    {
        int caryy = 1;
        for (int i = size-1; i >= 0; i--)
        {
            if (array[i]==9 && caryy == 1)
            {
                array[i]=0;
                caryy = 1;
            }
            else
            {
                array[i]++;
                caryy = 0;
                break;
            }     
        }
        if (caryy == 1)
        {
            array[0]=1;
            size++;
            for (int i = 1; i < size; i++)
            {
                array[i]=0;
            }
        }
    } 
    printf("plus one number: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d|",array[i]);
    }
    return 0;
}