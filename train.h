#ifndef TRAIN_H
#define TRAIN_H

struct Train {
    int train_no;
    char from[20];
    char to[20];
    int total_seats;
    int available_seats;
};

extern struct Train trains[5];

void initializeTrains(void);
void viewTrains(void);
void showMenu(void);

#endif
