#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    float total_price = 10;
    bool student = false;
    bool seniour = false;

    char student1[20];
    printf("are you a student? (answer with yes or no): ");
    fgets(student1, sizeof(student1), stdin);
    student1[strcspn(student1, "\n")] = '\0';

    if (strcmp(student1, "yes") == 0) {
        student = true;
    } 
    else if (strcmp(student1, "no") == 0) {
        student = false;
    } 
    else {
        printf("invalid input\n");
    }

    char seniour1[20];
    printf("are you a seniour? (answer with yes or no): ");
    fgets(seniour1, sizeof(seniour1), stdin);
    seniour1[strcspn(seniour1, "\n")] = '\0';

    if (strcmp(seniour1, "yes") == 0) {
        seniour = true;
    } 
    else if (strcmp(seniour1, "no") == 0) {
        seniour = false;
    } 
    else {
        printf("invalid input\n");
    }

    if (student) {
        if (seniour) {
            printf("you get discount 30%% because you are a student and a seniour\n");
            total_price *= 0.7f;
        } 
        else {
            printf("you get discount 10%% because you are a student\n");
            total_price *= 0.9f;
        }
    } 
    else if (seniour) {
        printf("you get discount 20%% because you are a seniour\n");
        total_price *= 0.8f;
    } 
    else {
        printf("you get no discount\n");
    }

    printf("total price is: %.2f\n", total_price);

    return 0;
}