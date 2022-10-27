#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main() {
    struct student stu;
    struct student *stu_pointer = &stu;

    // WORSE WAY
    // (*stu_pointer).zID = 5123456;
    // (*stu_pointer).wam = 74.7;
    // strcpy((*stu_pointer).name, "Frankie");

    // BETTER WAY - SAME THING
    stu_pointer->zID = 5123456;
    stu_pointer->wam = 74.7;
    strcpy(stu_pointer->name, "Frankie");

}
