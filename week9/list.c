// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

// 1 -> 2 -> 3 -> NULL
// 1 -> 2 -> 1 -> 3 -> NULL
// 1 -> NULL
// NULL

// delete the first instance of the smallest number we've seen
struct node *list_delete_smallest(struct node *head) {
    /*
    Find the smallest number in the ll
        Traverse the ll and record the smallest number we've seen
    traverse the ll again
    if node->data == smallest, delete it
        case: beginning
            cur = head->next
            free(head)
            return cur
        case: end
            use a prev
            while (cur->next != NULL)
            prev = cur->next
            free(cur)
            return head
    edge cases: head == null or size == 1
    */

    // edge case!!
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    struct node *current = head;
    struct node *prev = NULL;
    struct node *smallest_prev = NULL;

    int smallest_data = head->data;

    // 2 -> 1 -> 3 -> NULL
    while (current->next != NULL) {
        if (current->next->data < smallest_data) {
            smallest_data = current->next->data;
            smallest_prev = current;
        }
        current = current->next;
    }

    if (smallest_prev == NULL) {
        current = head;
        head = head->next;
    } else {
        current = smallest_prev->next;
        smallest_prev->next = current->next;
    }

    free(current);
    return head;
}


struct node *traversal(struct node *head, int data) {
    struct node *cur = head;

    // traverse entire list
    while (cur != NULL) {
        cur = cur->next;
    }
    // cur = null

    // make cur be the last node of the ll
    while (cur->next != NULL) {
        cur = cur->next;
    }
    // cur = 3

    // get second last node of the linked list
    // 1 -> NULL
    while (cur->next->next != NULL) {
        cur = cur->next;
    }
    // cur = 2


}

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// We want to create an exact copy of the linked list given
struct node *copy(struct node *list) {
    /* Plan
        - Make a pointer to the head of the given linked list
        - Loop through the original linked list and for each node,
            create a new node and append it to our new linked list
        - Create the head of a new linked list using malloc
            - Do this for every node we create
        - How do I know when I get to the end of the original list?
            - when the current pointer points to null
    */
    struct node *old_current = list;

    struct node *new_head = malloc(sizeof(struct node));
    new_head->data = list->data;

    struct node *new_current = new_head;

    old_current = old_current->next;
    while (old_current != NULL) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->data = old_current->data;

        new_current->next = new_node;

        new_current = new_current->next;
        old_current = old_current->next;
    }


    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    /* Plan
        - Loop through the first list until you get to the tail
        - Point the tail to the head of the second list
    */
    struct node *current = first_list;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = second_list;


    return first_list;
}

// Compar ethe lists and determine if identical. Return 1 if true, 0 if false
int identical(struct node *first_list, struct node *second_list) {
    /* Plan:
        - Check lists not NULL
        - Create current pointer for each list
        - Loop through
        - Compare each current with each other
        - If not equal, return false immediately
        - otherwsie, if you get to the end, they are equal
        - Edge case: ???
            List 1: 1, 2, 3 NULL
            List 2: 1, 2, 3, 4
    */

   struct node *first_current = first_list;
   struct node *second_current = second_list;

    while(first->current != NULL) {

        if (first->data != second->data) {
            return 0;

        }

        first_current = first_current->next;
        second_current = second_current->next;
    }

    if (second_current != NULL) {
        return 0;
    }


    return 1;
}

// Create a new list containing only nodes that are in both lists
struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    /* Plan
        - Create out new list
        - Loop through one of the lists
            - For each node in our original list, loop through the second list, and check if it's in the second list
            - If we find that the node exists in the second list, malloc a new node and add it to our list
    */
   struct node *first_current = first_list;
   struct node *second_current = second_list;

    struct node *new_head = NULL;
    struct node *new_head_current = NULL;

    while(first_current != NULL) {

        while (second_current != NULL) {
            if (first_current->data == second_current->data) {
                struct node *new_node = malloc(sizeof(struct node));
                new_node->data = first_current->data;
                new_node->next = NULL;

                // Add it it to our head
                // CASE: head is NULL
                if (new_head == NULL) {
                    new_head = new_node;
                    new_head_current = new_node;
                } else {
                    // Head is not null
                    new_head_current->next = new_node;
                    new_head_current = new_head_current->next;
                }
            }

            second_current = second_current->next;
        }


        second_current = second_list;
        first_current = first_current->next;
    }


    return new_head;
}