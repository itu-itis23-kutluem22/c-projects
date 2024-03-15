#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    const int tas = 1, kagit = 2, makas = 3;
    int secilen_birinci_hamle;

    printf("Tas icin 1'i seciniz.\nKagit icin 2'yi seciniz.\nMakas icin 3'u seciniz.\nHamlenizi seciniz: ");
    scanf("%d",&secilen_birinci_hamle);
    
    switch (secilen_birinci_hamle)
    {
    case 1:
        printf("ilk hamle: tas\n");
        break;
    
    case 2:
        printf("ilk hamle: kagit\n");
        break;
    case 3:
        printf("ilk hamle: makas\n");
        break;
    default:
        printf("1, 2 veya 3 haricinde sayi girmeniz rica olunur. Hadi tekrar deneyelim.\n");
        return main();
    }

    int secilen_ikinci_hamle = rand() % 3 + 1;

    switch (secilen_ikinci_hamle)
    {
    case 1:
        printf("ikinci hamle: tas\n");
        break;
    
    case 2:
        printf("ikinci hamle: kagit\n");
        break;
    case 3:
        printf("ikinci hamle: makas\n");
        break;
    }

    if (secilen_birinci_hamle == secilen_ikinci_hamle) {
        printf("Kazanan yok, iki taraf da ayni hamleyi yapti.\n");
    } else if ((secilen_birinci_hamle == 1 && secilen_ikinci_hamle == 2) ||
               (secilen_birinci_hamle == 2 && secilen_ikinci_hamle == 1)) {
        printf("Ve kazanan kagit.\n");}
    else if ((secilen_birinci_hamle == 3 && secilen_ikinci_hamle == 2) ||
               (secilen_birinci_hamle == 2 && secilen_ikinci_hamle == 3)) {
        printf("Ve kazanan makas.\n");
    } else {
        printf("Ve kazanan tas.\n");
    }

    return 0;
}