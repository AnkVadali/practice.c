//Bus ticket:

#include <stdio.h>

int main() {
    int age;
    float ticketPrice;

    printf("Enter age: ");
    scanf("%d", &age);

        if (age < 5) {
        ticketPrice = 0.0; 
    } 
    else if (age >= 5 && age < 18) {
        ticketPrice = 20.0; 
    } 
    else if (age >= 30 ) {
        ticketPrice = 40.0; 
    } 
    else if (age >= 50){
        ticketPrice = 45.0;
    }
    else if (age >= 65){
        ticketPrice = 40.0;
    }
        
    printf("Ticket Price: $%.2f\n", ticketPrice);

    return 0;
}

