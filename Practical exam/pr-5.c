#include <stdio.h>

int main() {
    int n = 5;  
    int num = 10;  

    
    for (int i = 1; i <= n; i++) {
        int square = num * num;  
    
        for (int j = 1; j <= i; j++) {
            printf("%d ", square);
        }
        printf("\n");  

        num--;  
    }

    return 0;
}
