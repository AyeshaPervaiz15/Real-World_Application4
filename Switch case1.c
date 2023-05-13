#include <stdio.h>

int main() {
    int choice;

    int workingHours, basicSalary, totalSalary;
    printf("Enter Working Hours");
    scanf("%d", &workingHours);
    printf("Enter 1 to calculate salary package of faculty\nEnter 2 to calculate salary package of admin");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            basicSalary = 30000;
            break;
        case 2:
            basicSalary = 10000;
            break;
    }
    totalSalary = basicSalary * workingHours;
    printf("%d", totalSalary);

}
