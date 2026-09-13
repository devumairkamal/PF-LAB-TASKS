#include <stdio.h>

int main() {
    int balance, amount;

    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Enter amount: ");
    scanf("%d", &amount);

    if (amount > 0 && amount <= balance) {
        printf("Withdrawal Approved\n");
    } else {
        printf("Withdrawal Denied\n");
    }

    return 0;
}