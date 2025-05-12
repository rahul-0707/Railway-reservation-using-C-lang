#include <stdio.h>
#include "train.h"
#include "passenger.h"

int main() {
    initializeTrains();
    int choice;
    
    while (1) {
        printf("\n=== Railway Reservation System ===\n");
        printf("1. View Available Trains\n");  // New option
        printf("2. Book a Ticket\n");
        printf("3. Cancel a Ticket\n");
        printf("4. View Bookings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                viewTrains();  // Added this case
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                viewBookings();
                break;
            case 5:
                printf("Thank you for using Railway Reservation System!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
