#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int compare_person(struct Person p1, struct Person p2) {
    int name_cmp = strcmp(p1.name, p2.name);
    if (name_cmp != 0) return name_cmp;
    return p1.age - p2.age;
}

int main() {
    struct Person p1, p2;
    printf("Enter first person's name: ");
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = '\0';
    printf("Enter first person's age: ");
    scanf("%d", &p1.age);
    getchar();
    
    printf("Enter second person's name: ");
    fgets(p2.name, sizeof(p2.name), stdin);
    p2.name[strcspn(p2.name, "\n")] = '\0';
    printf("Enter second person's age: ");
    scanf("%d", &p2.age);
    
    int result = compare_person(p1, p2);
    if (result < 0) {
        printf("%s (age %d) comes before %s (age %d)\n", p1.name, p1.age, p2.name, p2.age);
    } else if (result > 0) {
        printf("%s (age %d) comes before %s (age %d)\n", p2.name, p2.age, p1.name, p1.age);
    } else {
        printf("Persons are equal\n");
    }
    
    return 0;
}