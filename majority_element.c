#include <stdio.h>
//https://leetcode.com/problems/majority-element/
int main(){
    int nums_size;
    printf("enter size: ");
    scanf("%d",&nums_size);
    int nums[nums_size];
    printf("enter elements: ");
    for (int i = 0; i < nums_size; i++)
    {
        scanf("%d",&nums[i]);
    }
    for (int i = 0; i < nums_size; i++)
    {
        int sayac = 0;
        for (int j = i +1; j < nums_size; j++)
        {
            if (nums[i]==nums[j])
            {
                sayac++;
            }
        }
        if (sayac>=nums_size/2)
        {
            printf("majority element of the array is %d",nums[i]);
            break;
        }
    }
    return 0;
}