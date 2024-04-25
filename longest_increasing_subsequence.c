#include <stdio.h>
//https://leetcode.com/problems/longest-continuous-increasing-subsequence/
int main(){
    int size, current_length = 1, maximum_length = 1;
    printf("enter size: ");
    scanf("%d",&size);
    int sequence[size];
    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&sequence[i]);
    }
    for (int i = 1; i < size; i++)
    {
        if (sequence[i]<sequence[i+1])
        {
            current_length++;
            if (current_length>maximum_length)
            {
                maximum_length = current_length;
            }
        }
        else
        {
            current_length = 1;
        }    
    }
    printf("en uzun: %d",maximum_length);
    return 0;
}