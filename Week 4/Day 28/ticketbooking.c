// Ticket Booking System

#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
    float price;
};

int main()
{
    struct Ticket t;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("Enter Ticket Price: ");
    scanf("%f", &t.price);

    printf("\nBooking Details\n");
    printf("Customer Name: %s\n", t.name);
    printf("Seats Booked: %d\n", t.seats);
    printf("Total Amount: %.2f\n", t.seats * t.price);

    return 0;
}