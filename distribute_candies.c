#include <stdio.h>
//https://leetcode.com/problems/distribute-candies/description/
int eliminiting(int array[], int size){
    int new_size;
    for (int i = 0; i < size; i++)
    {
        int sayac = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                sayac++;
            }
        }
        for (int k = i + 1; k < size; k++)
        {
            array[k] = array [k+sayac];
        }
        size-=sayac;
        new_size = size;
    }
    return new_size;
}

int main(){
    int number_sugar = 0;
    printf("Alice, enter the number of the sugar: ");
    scanf("%d",&number_sugar);
    if (number_sugar % 2 == 0)
    {
    int sugar[number_sugar];
    printf("enter your sugar: ");
    for (int i = 0; i < number_sugar; i++)
    {
        scanf("%d",&sugar[i]);
    }
    int different_candies = 0;
    different_candies = eliminiting(sugar,number_sugar);
    int edible_amount = number_sugar/2;
    if (edible_amount >= different_candies)
    {
        printf("alice can eat %d type of different candies.",different_candies);
    }
    else{
        printf("alice can eat %d type of different candies.",edible_amount);
    }
    }
    else{
        printf("you must enter even number.\n");
        main();
    }

    return 0;
}