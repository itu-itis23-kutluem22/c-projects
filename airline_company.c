#include <stdio.h>
#include <stdbool.h>
//itu practices question 9
int main(){
    int seats[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, seat_type = 0, index_first = 0, index_economy = 5, buy_seat;
    while (true)
    {
        printf("Please type 1 for first class\nPlease type 2 for economy\nPlease type 3 to end the program.\n");
        scanf("%d",&seat_type);
        
        if (seat_type == 3)
        {
            break;
        }
        else if (seat_type == 1 && index_first < 5){
            printf("empty seats: ");
            for (int i = 0; i < 5; i++)
            {
                if (seats[i] == 0)
                {
                    printf("%d|",i+1);
                }    
            }
            printf("\nWhich seat do you want to buy: ");
            scanf("%d",&buy_seat);
            seats[buy_seat-1] = 1;
            index_first++;
            printf("Seat Number: %d, First Class.\nNew Selection Starts...\n",buy_seat);          
        }
        else if (seat_type == 2 && index_economy < 10){
            printf("Empty seats: ");
            for (int i = 5; i < 10; i++)
            {
                if (seats[i] == 0)
                {
                    printf("%d|",i+1);
                }
                
            }
            printf("\nWhich seat do you want to buy: ");
            scanf("%d",&buy_seat);
            seats[buy_seat-1] = 1;
            printf("Seat Number: %d, Economy Class.\nNew Selection Starts...\n",buy_seat);
            index_economy++;
        }
        else if (index_first == 5 && index_economy == 10){
                printf("All seats are unavailable, the next flight leaves in 3 hours."); 
                break;   
            }
        else if (index_first != 5 && index_economy == 10)
            {
                char option;
                printf("All seats are unavailable. Is it acceptable to be placed the first section for you.(y or n)");
                scanf(" %c",&option);
                if (option == 'Y' || option == 'y')
                {
                printf("Empty seats: ");
                for (int i = 0; i < 5; i++)
                {
                    if (seats[i] == 0)
                    {
                        printf("%d|",i+1);
                    }
                }
                printf("\nWhich seat do you want to buy: ");
                scanf("%d",&buy_seat);
                seats[buy_seat-1]=1;
                index_first++;
                printf("Seat Number: %d, Economy Class.\nNew Selection Starts...\n",buy_seat);
                }
                else if (option == 'N' || option == 'n'){
                    printf("Next flight leaves in 3 hours.");
                    break;
                }
            }
        else if (index_first == 5 && index_economy != 10)
            {
                char option;
                printf("All seats are unavailable. Is it acceptable to be placed the economy section for you.(y or n)");
                scanf(" %c",&option);
                if (option == 'Y' || option == 'y')
                {
                printf("Empty seats: ");
                for (int i = 5; i < 10; i++)
                {
                    if (seats[i] == 0)
                    {
                        printf("%d|",i+1);
                    }
                }
                printf("\nWhich seat do you want to buy: ");
                scanf("%d",&buy_seat);
                seats[buy_seat-1]=1;
                index_economy++;
                printf("Seat Number: %d, Economy Class.\nNew Selection Starts...\n",buy_seat);
                }
                else if (option == 'N' || option == 'n'){
                    printf("Next flight leaves in 3 hours.");
                    break;
                }
            }
    }
    return 0;
}