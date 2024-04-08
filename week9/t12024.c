

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {

    return 0;
}


int list_evens(struct node *head1, struct node *head2) {
    int found1 = 0, found2 = 0;
    while (head1 != NULL) {
        if (head1->data % 2 == 0) {
            found1 = 1;
            break;
        }
        head1 = head1->next;
    }

    while (head2 != NULL) {
        if (head2->data % 2 == 0) {
            found2 = 1;
            break;
        }
        head2 = head2->next;
    }

    if (found1 && found2) {
        return -1;
    }

    if ( found1 || found2) {
        return 1;
    }

    return 0;

}

struct node *list_ordered_insert(struct node *head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;

    struct node *prev = NULL;
    struct node *curr = head;
    while (curr != NULL && curr->data < value) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        new_node->next = head;
        head = new_node;
    } else {
        prev->next = new_node;
        new_node->next = curr;
    }

    return head;
}

struct node *list_delete_smallest(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    struct node *current = head;
    struct node *smallest_prev = NULL,;
    struct node *prev = NULL;

    int smallest_data = head->data;

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

struct node *list_copy(struct node *head) {
    if (head == NULL) {
        return head;
    }

    struct node *current = head;
    struct node *new_head = NULL;
    struct node *new_tail = NULL;
    struct node *temp;

    while (current != NULL) {
        temp = malloc(sizeof(struct node));
        temp->data = current->data;
        temp->next = NULL;

        if (new_head == NULL) {
            new_head = temp;
            new_tail = temp;
        } else {
            new_tail->next = temp;
            new_tail = temp;
        }

        current = current->next;
    }

    current = head;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    return new_head;
}

struct node *list_append(struct node *head1, struct node *head2) {
    if (!head1) return head2;
    struct node *current = head1;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = head2;
    return head1;
}


struct node *list_reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Helper function to check if a value exists in a list.
int exists_in_list(struct node *head, int data) {
    struct node *current = head;
    while (current != NULL) {
        if (current->data == data) return 1;
        current = current->next;
    }
    return 0;
}

// Function to find intersection of two lists.
struct node *list_find_intersection(struct node *head1, struct node *head2) {
    struct node *result = NULL;

    while (head1 != NULL) {
        if (exists_in_list(head2, head1->data) &&
            !exists_in_list(result, head1->data))
        {
            struct node *new_node = malloc(sizeof(struct node));
            new_node->data = data;
            new_node->next = NULL;

            if (result == NULL) {
                result = new_node;
            } else {
                struct node *current = result;
                while (current->next != NULL) {
                    current = current->next;
                }
                current->next = new_node;
            }
        }
        head1 = head1->next;
    }

    return result;
}

int list_count_occurrences(struct node *head, int data) {
    int count = 0;
    while (head != NULL) {
        if (head->data == data) {
            count++;
        }
        head = head->next;
    }
    return count;
}