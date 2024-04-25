#include <stdio.h>
//https://leetcode.com/problems/robot-return-to-origin/description/
//stringleri öğrenince yeniden yap olmadı
int main(){
    char movement[32], control;
    int sayac_L = 0, sayac_R = 0, sayac_U = 0, sayac_D = 0;
    printf("Enter the movement of the robot: ");
    for (int i = 0; i < 32; i++)
    {
        scanf("%c",movement[i]);
    }
    for (int i = 0; i < 32; i++)
    {
        control = movement[i];
        if (control == 'L' || control == 'l')
        {
            sayac_L++;
        }
        else if (control == 'R' || control == 'r')
        {
            sayac_R++;
        }
        else if (control == 'U' || control == 'u')
        {
            sayac_U++;
        }
        else if (control == 'd' || control == 'D')
        {
            sayac_D++;
        }
    }
    if (sayac_L == sayac_R && sayac_D == sayac_U)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}