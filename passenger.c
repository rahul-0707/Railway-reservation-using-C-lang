#include <stdio.h>
#include <string.h>
#include "passenger.h"
#include "train.h"

struct Passenger passengers[100];
int passenger_count = 0;
int ticket_id_counter = 1000;

void bookTicket() {
    if (passenger_count >= 100) {
        printf("Sorry, booking limit reached!\n");
        return;
    }

    struct Passenger newPassenger;
    newPassenger.ticket_id = ticket_id_counter++;

    printf("\nEnter passenger details:\n");
    printf("Name: ");
    scanf(" %[^\n]s", newPassenger.name);
    
    printf("Age: ");
    scanf("%d", &newPassenger.age);
    
    printf("Gender (M/F): ");
    scanf(" %c", &newPassenger.gender);
    
    printf("Train Number: ");
    scanf("%d", &newPassenger.train_number);
    
    // Assign a simple seat number (can be enhanced with actual seat management)
    newPassenger.seat_number = passenger_count + 1;
    
    passengers[passenger_count++] = newPassenger;
    
    printf("\nTicket booked successfully!");
    printf("\nTicket ID: %d", newPassenger.ticket_id);
    printf("\nSeat Number: %d\n", newPassenger.seat_number);
}

void cancelTicket() {
    int ticket_id;
    printf("\nEnter ticket ID to cancel: ");
    scanf("%d", &ticket_id);
    
    for (int i = 0; i < passenger_count; i++) {
        if (passengers[i].ticket_id == ticket_id) {
            // Remove passenger by shifting array elements
            for (int j = i; j < passenger_count - 1; j++) {
                passengers[j] = passengers[j + 1];
            }
            passenger_count--;
            printf("Ticket cancelled successfully!\n");
            return;
        }
    }
    printf("Ticket ID not found!\n");
}

void viewBookings() {
    if (passenger_count == 0) {
        printf("\nNo bookings found!\n");
        return;
    }
    
    printf("\n=== Current Bookings ===\n");
    printf("Ticket ID | Name | Age | Gender | Train | Seat\n");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < passenger_count; i++) {
        printf("%d | %s | %d | %c | %d | %d\n",
            passengers[i].ticket_id,
            passengers[i].name,
            passengers[i].age,
            passengers[i].gender,
            passengers[i].train_number,
            passengers[i].seat_number);
    }
}
