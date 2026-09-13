#include <stdio.h>

int main() {
    int choice;

    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Burger\n");
            break;
        case 2:
            printf("Pizza\n");
            break;
        case 3:
            printf("Biryani\n");
            break;
        case 4:
            printf("Sandwich\n");
            break;
        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}