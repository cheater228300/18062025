#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char position[50];
    double salary;
};

void print_employee(struct Employee e) {
    printf("Name: %s\nPosition: %s\nSalary: %.2f\n", e.name, e.position, e.salary);
}

int main() {
    struct Employee e;
    printf("Enter name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = '\0';
    printf("Enter position(dolznoslt'): ");
    fgets(e.position, sizeof(e.position), stdin);
    e.position[strcspn(e.position, "\n")] = '\0';
    printf("Enter salary(zp): ");
    scanf("%lf", &e.salary);
    
    print_employee(e);
    return 0;
}