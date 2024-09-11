//food bill:
#include <stdio.h>

int main() {
    int op, qty, total, total_price;
    int pizza = 180;
    int burger = 90;
    int sandwich = 120;
    int maza = 20;
    int coco = 80;
    int sprit = 50;

    // Display menu
    printf("Fast Food\tPrice\t\tBeverage\tPrice\n");
    printf("-----------------------------------------------\n");
    printf("1. Pizza\t%d\t\t1. Maza\t\t%d\n", pizza, maza);
    printf("2. Burger\t%d\t\t2. Coco\t\t%d\n", burger, coco);
    printf("3. Sandwich\t%d\t\t3. Sprit\t%d\n", sandwich, sprit);

    // Get food choice
    printf("\nEnter your food choice (1-3): ");
    scanf("%d", &op);

    // Validate food choice
    if (op < 1 || op > 3) {
        printf("Invalid food choice!\n");
        return 1;
    }

    // Get quantity and calculate total for food
    printf("\nEnter quantity: ");
    scanf("%d", &qty);

    switch(op) {
        case 1:
            printf("\nYou have chosen Pizza\n");
            total = pizza * qty;
            break;
        case 2:
            printf("\nYou have chosen Burger\n");
            total = burger * qty;
            break;
        case 3:
            printf("\nYou have chosen Sandwich\n");
            total = sandwich * qty;
            break;
    }
    printf("Your total for the food is: %d\n", total);

    // Get drink choice
    printf("\nEnter your cold drink choice (1-3): ");
    scanf("%d", &op);

    // Calculate and display total price
    switch(op) {
        case 1:
            printf("You have chosen Maza\n");
            total_price = total + maza;
            break;
        case 2:
            printf("You have chosen Coco\n");
            total_price = total + coco;
            break;
        case 3:
            printf("You have chosen Sprit\n");
            total_price = total + sprit;
            break;
        default:
            printf("Invalid drink choice!\n");
            return 1;
    }

    printf("Your total bill is: %d\n", total_price);

    return 0;
}
