#include <stdio.h>
#include <string.h>

struct student {
  int zid;
  int wam;
};

void swap_details(struct student *member1, struct student *member2);

int main() {
    struct student stu;
    struct student stu2;


    stu.zid = 5555555;
    stu.wam = 100;

    stu2.zid = 4444444;
    stu2.wam = 95;

    // Swap the details
    swap_details(&stu, &stu2);

    printf("stu\nzid: %d\nwam: %d\n", stu.zid, stu.wam);
    printf("stu2\nzid: %d\nwam: %d\n", stu2.zid, stu2.wam);

    return 0;

}

// Swaps the numbers of each struct
void swap_details(struct student *member1, struct student *member2) {
    int temp_zid = (*member1).zid;
    int temp_wam = (*member1).wam;

    // UUUGGGLEYYYY
    // (*member1).zid = (*member2).zid;
    // (*member1).wam =  (*member2).wam;
    // (*member2).zid = temp_zid;
    // (*member2).wam = temp_wam;

    // Better way to do it!!
    member1->zid = member2->zid;
    member1->wam = member2->wam;
    member2->zid = temp_zid;
    member2->wam = temp_wam;


}