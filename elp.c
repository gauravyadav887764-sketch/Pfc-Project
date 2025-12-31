#include<stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);
    if (units <= 50) {
        bill = units * 1.5;}
    else if (units <= 100 && units>50) {
        bill = (50 * 1.5) + (units - 50) * 2.5;}
    else if (units <= 200) {
        bill = (50 * 1.5) + (50 * 2.5) + (units - 100) * 4.0;}
    else {
        bill = (50 * 1.5) + (50 * 2.5) + (100 * 4.0) + (units - 200) * 6.0; }
    printf("Electricity Bill Amount = ₹%.2f\n", bill);
    return 0;
}