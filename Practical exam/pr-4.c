#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[100];
};

int main() {
    int n;
    printf("Enter the number of houses: ");
    scanf("%d", &n);

    struct House h[n]; 

    for (int i = 0; i < n; i++) {
        printf("Enter the room quantity: ");
        scanf("%d", &h[i].room_quantity);

        printf("Enter the established year: ");
        scanf("%d", &h[i].established_year);

        printf("Enter the city: ");
        scanf("%s", h[i].city);
    }

    for (int i = 0; i < n; i++) {
        printf("\nRoom quantity: %d", h[i].room_quantity);
        printf("\nEstablished year: %d", h[i].established_year);
        printf("\nCity: %s", h[i].city);
        printf("\n");
    }

    return 0;
}
