#include <stdio.h>

struct Car {
    char Brand[50];
    char Model[50];
    int year;
};

int main() {
    // Declare and initialize a struct Car variable
    struct Car car1 = {
        "BMW", "X5", 1999
    };

    // Print the values of the structure members
    printf("Brand: %s\n", car1.Brand);
    printf("Model: %s\n", car1.Model);
    printf("Year: %d\n", car1.year);

    return 0;
}
