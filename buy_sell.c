#include <stdio.h>
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int main(){
    int size;
    printf("size: ");
    scanf("%d",&size);
    int array[size], max_profit = 0;
    printf("elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i = 0; i<size;i++){
        for(int j = i; j<size;j++){
            if (max_profit<(array[j]-array[i]))
            {
                max_profit = array[j]-array[i];
            }
        }
    }
    printf("max profit is: %d",max_profit);
    return 0;
}