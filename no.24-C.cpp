#include <stdio.h>

struct Person {
    char name[50];
    int age;
    char address[100];
};

void printPerson(struct Person person) {
    printf("ชื่อ: %s\n", person.name);
    printf("อายุ: %d\n", person.age);
    printf("ที่อยู่: %s\n", person.address);
}

int main() {
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    strcpy(person1.address, "123 Main St, City");

    printf("ข้อมูลบุคคลที่ 1:\n");
    printPerson(person1);

    return 0;
}
