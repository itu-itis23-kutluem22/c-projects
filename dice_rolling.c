#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int array[36000];
    int dice_1, dice_2;
    for (int i = 0; i < 36000; i++)
    {
        dice_1 = rand()%6+1;
        dice_2 = rand()%6+1;
        array[i] = dice_1 + dice_2;
    }
    for (int i = 2; i < 13; i++)
    {
        int sayac = 0;
        for (int j = 0; j < 36000; j++)
        {
            if (i == array[j])
            {
                sayac++;
            }
        }
        printf("possibility of coming %d: %.3lf\n",i,(double)sayac/36000);
    }
    return 0;
}