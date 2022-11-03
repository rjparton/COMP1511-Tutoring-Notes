#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_LEN 50

struct list {
    struct node *head;
};

struct node {
    struct node *next;
    int          data;
    char name[MAX_LEN];
};

void print(struct node *head);
struct node *array_to_list(int len, int num_array[]);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(void) {
    // create linked list from input
    int input_arr[MAX_LEN] = {0};
    int total_num = 0;
    int input_num;
    while (scanf(" %d", &input_num) == 1) {
        input_arr[total_num] = input_num;
        total_num++;
    }
    struct node *head = array_to_list(total_num, input_arr);

    print(head);

    return 0;
}


// print a linked list in this format:
// 17 -> 34 -> 51 -> 68 -> X
void print(struct node *head) {

    // How to traverse a linked List until current = NULL
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    

}


// DO NOT CHANGE THIS FUNCTION

// 0 -> 1 -> 2
// [0, 1, 2]

/* Order of operations
    Create 2
        next = NULL
        head = 2
    Create 1
        next = 2
        head = 1
    Create 0
        next = 1
        head = 0 
*/ 
// create linked list from array of strings
struct node *array_to_list(int len, int num_array[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->data = num_array[i];
        n->next = head;
        head = n;
    }
    return head;
}