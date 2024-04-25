#include <stdio.h>
#include <stdbool.h>
//https://leetcode.com/problems/baseball-game/
int main(){
    char operations;
    int size, new_score = 0;
    printf("enter size: ");
    scanf("%d",&size);
    int score_board[size];
    printf("enter the points: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&score_board[i]);
    }
    printf("'+'Record a new score that is the sum of the previous two scores.\n");
    printf("'D'Record a new score that is the double of the previous score.\n");
    printf("'C'Invalidate the previous score, removing it from the record.\n");
    printf("'Q' to finish the program.\n");
    while(true)
    { 
        printf("Now enter the operations: ");  
        scanf(" %c",&operations);
        if (operations == '+')
        {
            new_score = score_board[size-1]+score_board[size-2];
            size++;
            score_board[size-1]=new_score;
            new_score = 0;
        }
        else if (operations=='D'||operations=='d')
        {
            new_score = 2*score_board[size-1];
            size++;
            score_board[size-1]=new_score;
            new_score = 0;
        }
        else if (operations=='C'||operations=='c')
        {
            size--;
        }
        else if (operations=='Q'||operations=='q')
        {
            break;
        }
        
        else{
            printf("you have entered an invalid operation, try again.\n");
        }
    }
    printf("The total sum is: ");
    int sum = 0;
    for (int i = 0; i < size -1; i++)
    {
        printf("%d + ",score_board[i]);
        sum+=score_board[i];
    }
    sum+=score_board[size-1];
    printf("%d = %d",score_board[size-1],sum);
    return 0;
}