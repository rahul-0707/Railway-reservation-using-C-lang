#ifndef PASSENGER_H
#define PASSENGER_H

struct Passenger {
    int ticket_id;
    char name[50];
    int age;
    char gender;
    int train_number;
    int seat_number;
};

void bookTicket(void);
void cancelTicket(void);
void viewBookings(void);

#endif
