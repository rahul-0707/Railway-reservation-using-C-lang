#include <stdio.h>
#include "train.h"

struct Train trains[5];

void initializeTrains() {
    trains[0] = (struct Train){101, "Delhi", "Mumbai", 100, 100};
    trains[1] = (struct Train){102, "Chennai", "Bangalore", 80, 80};
    trains[2] = (struct Train){103, "Kolkata", "Patna", 60, 60};
    trains[3] = (struct Train){104, "Lucknow", "Agra", 50, 50};
    trains[4] = (struct Train){105, "Jaipur", "Udaipur", 70, 70};
}

void viewTrains() {
    printf("\n================ Available Trains ================\n");
    printf("%-10s %-15s %-15s %-15s\n", "Train No.", "From", "To", "Available Seats");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-15s %-15s %-15d\n", 
            trains[i].train_no, 
            trains[i].from, 
            trains[i].to, 
            trains[i].available_seats);
    }
    printf("------------------------------------------------\n");
}

void showMenu() {
    printf("\n====== Railway Reservation System ======\n");
    printf("1. View Trains\n");
    printf("2. Book Ticket\n");
    printf("3. Cancel Ticket\n");
    printf("4. View Bookings\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}
