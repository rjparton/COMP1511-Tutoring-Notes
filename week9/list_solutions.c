// Solutions for Tutorial 9's questions
// Modified by Marc Chee April 2020 (cs1511@cse.unsw.edu.au)

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "list.h"

#define IDENTICAL 1
#define NOT_IDENTICAL 0

struct node {
    int         data;
    struct node *next;
};

/** HELPER FUNCTIONS **/
// Creates a linked list from the given array of values
struct node *create_list(int values[], int size);
// Creates a node with the given data item
struct node *create_node(int data);
// Print out the linked list starting at head
void print_list(struct node *head);

struct node *add_last(struct node *head, int data) {
    // Create a new node
    struct node *new = create_node(data);

    if (head == NULL) {
        return new;
    }

    // Keep moving through the linked list until we reach the final node
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new;

    return head;
}

struct node *delete_last(struct node *head) {

    if (head == NULL) {
        //list is empty, no nodes to delete.
        return head;
    }

    struct node *prev = NULL;
    struct node *curr = head;

    // 1 -> 2 -> 3 -> NULL
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    //at this point curr points to the last node of the list, and prev
    //points to node before it.
    // curr = 3
    // prev = 2

    // edge case
    if (prev == NULL) {
        //If prev is NULL, then the last node is also the first node.
        free(curr);
        return NULL;
    }

    // We don't need an else because we returned early
    prev->next = curr->next;
    free(curr);
    return head;
}

struct node *copy(struct node *old_head) {
    if (old_head == NULL) {
        return NULL;
    }
    struct node *new_head = create_node(old_head->data);

    // new_prev keeps track of the previous node before the new one
    struct node *new_prev = new_head;
    // old_curr keeps track of the data from the old linked list we want to copy
    struct node *old_curr = old_head->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    if (first_list == NULL) {
        return copy(second_list);
    }

    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    struct node *curr = first_copy;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;

    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data != second_curr->data) {
            return NOT_IDENTICAL;
        }
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }

    if (first_curr != NULL || second_curr != NULL) {
        return NOT_IDENTICAL;
    }

    return IDENTICAL;
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements
// in both set1 and set2
struct node *set_intersection(struct node *first_list, struct node *second_list) {
    struct node *head = NULL;

    // Loop through both lists at the same time.
    // We're not going to be at exactly the same place
    // in both lists, we might move asymetrically
    // based on which numbers are higher in which list.
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    // We don't need to check if either is NULL because that means there are extra
    // hanging elements which aren't a part of either.
    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data < second_curr->data) {
            // Since the data from the first list is less than the data from
            // the second list, we need to move it along
            first_curr = first_curr->next;
        } else if (second_curr->data < first_curr->data) {
            // Since the data from the second list is less than the data from
            // the first list, we need to move it along
            second_curr = second_curr->next;
        } else {
            // The last case is if both first_curr and second_curr hold the same
            // data which is when we add it and then increment them both
            head = add_last(head, first_curr->data);
            first_curr = first_curr->next;
            second_curr = second_curr->next;
        }
    }

    return head;
}

// =================================

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}

struct node *merge_sorted_iter(struct node *list1, struct node *list2) {
    struct node *start;
    struct node *n;
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    } else if (list1->data < list2->data) {
        start = list1;
        n = list1;
        list1 = list1->next;
    } else {
        start = list2;
        n = list2;
        list2 = list2->next;
    }
    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            n->next = list1;
            n = list1;
            list1 = list1->next;
        } else {
            n->next = list2;
            n = list2;
            list2 = list2->next;
        }
    }
    if (list1 == NULL) {
        n->next = list2;
    } else {
        n->next = list1;
    }
    return start;
}

struct node *merge_sorted_rec(struct node *list1, struct node *list2) {
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    } else if (list1->data < list2->data) {
        list1->next = merge_sorted(list1->next, list2);
        return list1;
    } else {
        list2->next = merge_sorted(list1, list2->next);
        return list2;
    }
}

// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}

struct node *insert_ordered(int item, struct node *list) {
    struct node *n;
    struct node *new = malloc(sizeof *new);
    if (new == NULL) {
        fprintf(stderr, "Out of memory");
        exit(1);
    }
    new->data = item;
    if (list == NULL || item < list->data) {
        new->next = list;
        return new;
    }
    n = list;
    while (n->next != NULL && n->next->data < item) {
        n = n->next;
    }
    new->next = n->next;
    n->next = new;
    return list;
}