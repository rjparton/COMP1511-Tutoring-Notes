// The following code is meant to ask the user to enter a size and numbers for a
// linked list. The last element of the linked list is removed then
// the resulting list is printed out.
// However, the delete_last function contains five lines with issues that you
// need to fix. Good luck!

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_LIST_LEN 100

struct node {
    int         data;
    struct node *next;
};

struct node *delete_last(struct node *head);
void print_list(struct node *head);
struct node *array_to_list(int len, int array[]);

// DO NOT CHANGE THE MAIN FUNCTION
int main(void) {

    // Get list size
    int list_size;
    printf("Total numbers: ");
    scanf(" %d", &list_size);

    // Read in numbers
    int list[MAX_LIST_LEN] = {0};
    int index_count = 0;
    while (index_count < list_size && scanf(" %d", &list[index_count])) {
        index_count++;
    }

    // Create linked list from input numbers
    struct node *head = NULL;
    if (index_count > 0) {
        // List has elements
        head = array_to_list(list_size, list);
    }

    struct node *new_head = delete_last(head);
    print_list(new_head);

    return 0;
}

// Delete the last element from a given linked list
// 1) Loop through and find the second last element and the last element
// 2) Free the last element
// 3) set 'next' to equal NULL for the second last element
struct node *delete_last(struct node *head) {


    struct node *prev = NULL;
    struct node *curr = head;

    // edge case: size = 1
    if (curr->next == NULL) {
        free(curr)
        return NULL;
    }

    // LOOP UNTIL THE END OF THE LIST. CURR FINISHES AS NULL
    // while (curr != NULL) {
    //     prev = curr;
    //     curr = curr->next;
    // }

    // LOOP UNTIL THE CURR == THE LAST ELEMENT OF THE LIST
    while (curr->next != NULL) {
        // prev = curr;
        curr = curr->next;
    }

    // prev = NULL, curr = 1

    free(curr);
    prev->next = NULL;

    return head;
}

// DO NOT CHANGE THIS FUNCTION
// prints the given linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *array_to_list(int len, int array[]) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = array[i];
        head = n;
        i -= 1;
    }
    return head;
}