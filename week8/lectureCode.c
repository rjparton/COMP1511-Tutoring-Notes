// This program introduces the linked list data structure
// YAY Linked Lists 
// Sasha 22T3 Week 7: Lecture 12

#include <stdio.h>
#include <stdlib.h> // this allows me to have malloc and free at my disposal

// Let's build up a node
struct node {
    int data;
    // pointer to a node, called next
    // int *number_ptr = pointer to an int
    // struct node *ptr = pointer to a struct
    struct node *next; 
};

// Let's have some functions!
// Create a node: this function will make us a new node
struct node *create_node(int data, struct node *next);
// Insert at the end of the list 
struct node *insert_at_end(struct node *head);
// Print list: This function will traverse through and print out the ll
void print_linked_list(struct node *head);
int size_linked_list(struct node *head);

// Function to delete a node 
// Input: head, data/position (depending on the question) - we might do data
// Output: head
struct node *delete_node(struct node *head, int data);

struct node *delete_node_at_posn(struct node *head, int position);

// Insert anywhere in the linked list function - at position blah.... 
// Input: head, position to insert in
// Output: head
struct node *insert_anywhere(struct node *head, int position);

void find_even(struct node *head);
struct node *insert_in_order(struct node *head, int data);

int main(void) {

    struct node *head = NULL;

    // create_node(data, next);
    head = create_node(8, NULL);
    head = create_node(5, head); 
    head = create_node(4, head);

    print_linked_list(head);

    /*insert_at_end(head);
    


    print_linked_list(head);

    printf("Linked list is %d items\n", size_linked_list(head));
    printf("\n The new linked list with insert is: \n");
    head = insert_anywhere(head, 9);
    print_linked_list(head);

    //head = delete_node(head, 9);
    //printf("\n");
    //print_linked_list(head);

    //head = delete_node_at_posn(head, 1);
    //print_linked_list(head);

    printf("The even numbers are: ");
    find_even(head);
    printf("\n");*/
    head = insert_in_order(head, 4);
    print_linked_list(head);

    return 0;
}

// This function creates a new node
// Output: our new node
// Input: int data, struct node *next (which are the two members of the node that you need to 
// make a node!)
struct node *create_node(int data, struct node *next) {
    struct node *new_node = malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = next;

    return new_node;

}



// This function inserts a node at the end of the list!
// Output: struct node * 
// Input: struct node *head  
struct node *insert_at_end(struct node *head) {
    struct node *current = head;
    
    while(current->next != NULL) {
        current = current->next;
    }

    // Come out of the while loop current->next = NULL, and you are 
    // standing/sitting at the last node of the list
    struct node *new_node = create_node(13, NULL);
    current->next = new_node;

    return head;
} 

struct node *insert_anywhere(struct node *head, int position) {
   
    // 1. Ask the user what they want to insert, and in what position they would like to insert it in
    struct node *current = head;
    int counter = 1;

    struct node *new_node = create_node(8, NULL);

    // check whether the linked List is empty. Important!!!
    if (current == NULL) {
        head = new_node;
        return head;
    }

    // What do we need to htink about when we are inserting?
    // 1. At the head
    // 2. At the tail
    // 3. Empty list ...
    // 4. in the middle
    while (current->next != NULL && counter != position) {
        current = current->next;
        counter++;
    }
    // Either current = NULL or counter = position
    if (counter == position) {
        new_node->next = current->next;
        current->next = new_node;
    }
    return head;

}


struct node *delete_node(struct node *head, int data) {

    // When we delete, we really want to consider some special edge cases
    // 1. List is empty
    // 2. List has one item
    // 3. Deleting at the head (as 2)
    // 4. Deleting at the tail... ?
    struct node *current = head;
    struct node *previous = NULL;

    //1. List empty?
    if (current == NULL) {
        return head;
    }

    //2. Delete at the head.... 
    if (current->data == data) {
        head = current->next;
        free(current);
        return head;
    }

    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }
    // When we exit the loop
    // Either current == NULL
    // Current->data = data (the node I am standing on)
    if (current == NULL) {
        return head;
    } else if (current->data == data) {
        previous->next = current->next;
        free(current);
    }
    return head;
}

// This function traverses the list and prints out the data stored in the nodes
// Output: void
// Input: head
void print_linked_list(struct node *head) {

    struct node *current = head;

    while(current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    // When I come out of the while loop, current = NULL
    printf("NULL\n");
}

// This function will calculate the size of a linked list
// Input: head (struct node *)
// Output: int size
int size_linked_list(struct node *head) {
    int counter = 0;
    struct node *current = head;

    while(current != NULL) {
        counter = counter + 1;
        current = current->next;
    }
    // When we exit out of the while loop, current = NULL, and we have gone through
    // all the nodes of the list
    return counter;
}

// Function to delete at the nth node of a list
// Input: head of the list and also the position at which to delete
// Output: head
struct node *delete_node_at_posn(struct node *head, int position) {

    struct node *current = head;
    struct node *previous = NULL;

    // What will I do to get to the position that I delete from?
    // I will also need a counter, that will count me up to the position
    // that I want to delete at
    int counter = 1;

    if (current == NULL) {
        return head;
    }

    if (counter == position) {
        head = current->next;
        free(current);
        return head;
    }

    while(current != NULL && counter < position) {
        previous = current;
        current = current->next;
        counter++;
    }
    // When I get to this point current == NULL
    // or my counter => position
    
    if (counter == position) {
        previous->next = current->next;
        free(current);
        return head;
    }
    return head;
    // Have you checked deleting at the head?
    // have you checked deleting an empty list?
    // have you checked deleting the tail?
}

// Function that prints out all the even numbers in the linked list
// Input: head
// Output: void
void find_even(struct node *head) {
    struct node *current = head;

    // Move through the list
    // and every time I get to an even data, print it out
    while (current != NULL) {
        if (current->data % 2 == 0) {
            printf("%d ", current->data);
        }
        current = current->next;
    }
    // current == NULL and that means I have visited every single
    // node in my list
}

// Question: Give a sorted list (smallest -> largest), given a number, insert
// the number into the list so it is still sorted 
// For example: given the list 4->5->8->NULL
// and insert 7, would return the list 4->5->7->8->NULL
// INPUT: head, number to insert?
// OUTPUT: head 
struct node *insert_in_order(struct node *head, int data) {
    struct node *current = head;
    struct node *previous = NULL;

    while (current != NULL && current->data < data) {
        // Inside this statement, we are not at the right node yet, 
        // we just want to move through the list to get to it
        previous = current;
        current = current->next;
    }
    // current->next == NULL (I am sitting on the last node)
    // current->data => data
    if (previous == NULL) {
        // Create the new node
        // insert it at the head.... 
        struct node *new_node = create_node(data, current);
        head = new_node;
        return head;
    } 
    struct node *new_node = create_node(data, previous->next);
    previous->next = new_node;

    return head;
}