
#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;

    reversed += (num % 10) * 100;  
    num /= 10;                     

    reversed += (num % 10) * 10;  
    num /= 10;                     

    reversed += num;             

    return reversed;
}

int main() {
    int num, result;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

  
    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;  
    }

    result = reverseNumber(num);

    printf("Reversed number: %d\n", result);

    return 0;
}
