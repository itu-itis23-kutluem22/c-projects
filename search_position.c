#include <stdio.h>
#include <stdbool.h>
//https://leetcode.com/problems/search-insert-position/
int main(){
    int size, target, flag = 0, mem;
    printf("enter size and target value: ");
    scanf("%d%d",&size,&target);
    int nums[size];
    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&nums[i]);
        if (nums[i]==target)
        {
            flag = 1;
            mem = i+1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("target element found at %d",mem);
        return 0;
    }
    else if (flag == 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (target>nums[i-1]&&target<nums[i])
            {
                flag = 1;
                mem = i+1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("target would be at %d",mem);
    }
    return 0;
}