#include <stdio.h>
#include <stdbool.h>

int main() {
    int array[16], target_element = 0;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 16 - 1; i++) {
        for (int j = 0; j < 16 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Enter the target element: ");
    scanf("%d", &target_element);

    int low = 0, high = 15;
    bool found = false;
    int flag;

    while (low <= high) {
        int middle = low + (high - low) / 2;
        flag = middle;

        if (array[middle] == target_element) {
            found = true;
            break;
        } else if (array[middle] < target_element) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    if (!found) {
        printf("Target element is not in the array.\n");
    }
    else
    {
    int binary_conver[32], sayac = 0, quotient, remainder, number = flag;
    while(quotient != 0){
        remainder = number % 2;
        quotient = number / 2;
        number/=2;
        binary_conver[sayac]=remainder;
        sayac++;
    }
    printf("target element at index: ");
    for (int i = sayac - 1; i >=0; i--)
    {
        printf("%d",binary_conver[i]);
    }
    }
    return 0;
}
