/* 
{1, 3, 2}
{1, 2}
DONE!

{2, 4, 5, 1}
{2, 4, 1}
{2, 1}
{1}
DONE

FLAGS
    - DID WE CHANGE ANYTHING?
        - YES: Check again
        - NO: All good, leave it alone

 */

#include <stdio.h>
#include <stdlib.h>

// Do not edit this struct. You may use it exactly as
// it is but you cannot make changes to it

// A node in a linked list
struct node {
    int data;
    struct node *next;
};

// ADD ANY FUNCTION DECLARATIONS YOU WISH TO USE HERE

// Remove any nodes in a list that are higher 
// than the node directly after them.
// Return the head of the list.
// The returned list must have no disorder in it!
struct node *remove_disorder(struct node *head) {
    // WRITE YOUR CODE HERE (you may need to change the line below)

    // CASES: HEAD VS THE REST

    // {5, 3, 1, 4, 2}


    // {1, 3, 2, 4}

    if (head == NULL) {
        return head;
    }

    // CREATE CURRENT POINTER
    struct node *current = head;

    int flag = 1;
    while (flag) {
        flag = 0;
        // HEAD CASE - DELETING FROM THE HEAD
        if (head->data > head->next->data) {
            struct node *temp = head;
            head = head->next;
            free(temp);
            flag = 1;
        } else {
            // REST OF LIST CASE - LOOP THROUGH THE LIST
            while (current->next->next != NULL) {
                if (current->next->data > current->next->next->data) {
                    struct node *temp = current->next;
                    current->next = current->next->next;
                    free(temp);
                    flag = 1;
                }
            }

            // CURRENT NOW EQUALS THE SECOND LAST NODE
            // NEED TO CHECK THE FINAL PAIR 

        }
    }

    




    return head;
}

// These helper functions are for the main below and will
// have no effect on your remove_disorder. They do not
// need to be modified.
struct node *make_list(int a, int b, int c);
void printList(struct node *head);

// This is a main function which could be used
// to test your remove_disorder function.
// It will not be marked.
// Only your remove_disorder function will be marked.
//
// It's recommended to change the int values in this
// main to test whether your remove_disorder is working.
int main(void) {
    // test an ordered list
    struct node *ordered = make_list(1, 2, 3);
    ordered = remove_disorder(ordered);
    printList(ordered);
    
    // test removing one element out of order
    ordered = make_list(1, 3, 2);
    ordered = remove_disorder(ordered);
    printList(ordered);
    
    // test a completely disordered list
    ordered = make_list(3, 2, 1);
    ordered = remove_disorder(ordered);
    printList(ordered);

    // test with the first removal causing more disorder
    ordered = make_list(2, 3, 1);
    ordered = remove_disorder(ordered);
    printList(ordered);
        
    return 0;
}

// A simple function to make a linked list with 3 elements
// This function is purely for the main above
// You will be tested with lists that are more and less
// than 3 elements long
struct node *make_list(int a, int b, int c) {
    struct node *head = malloc(sizeof (struct node));
    struct node *n = head;
    n->data = a;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = b;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = c;
    n->next = NULL;
    
    return head;
}

void printList(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
// ADD ANY FUNCTION DEFINITIONS YOU WISH TO USE HERE

