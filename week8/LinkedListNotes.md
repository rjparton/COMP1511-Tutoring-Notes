Linked Lists

//// What is a linked List
    - a data structure. Just like an array! It has different use cases

//// What are Nodes?
    //// In our train analogy, these are the different "carriages"
    //// Each node always has two pieces of info at least:
        1. A piece of data e.g the number of people on our carriage
        2. The "next" field. This contains the link or address to the next node in our train
//// What is a wrapper?
    - Another structure that contains the head of our linked List!
//// Traversing a Linked List until the end (i.e current = NULL)
    struct node *current = head;
    while (current != NULL) {
        
        current = current->next;
    
//// How do I traverse a linked List until current = the last node
    struct node *current = head;
    while (current->next != NULL) {
        
        current = current->next;
    }

//// Insertion
    //// How to create a new node
        struct node *n = malloc(sizeof (struct node));
        Then, assign the value and next.
    //// Where can we insert?
        - Head
            - We create our new node
            - Set the next field of our new node to equal the address of our old head
            - Update "head" wherever relevant to be our new node
        - Tail
            - Create a new_node with the next field = NULL
            - Traverse through the old list until current = the last node:
                - How do we know when current = the last node?
                    - while (current->next != NULL) {
            - After we break out of the loop, we set current->next = new_node
        - Somewhere in the middle 0 -> 1 -> 2 -> 3
            - Are we inserting after position or a value?
                - position: we need to have a counter/index to keep track of where we are
                    - int i = 0
                    - with each current = current->next, we increment i++
                - value e.g after a number:
                    - if (current->data == search_value)
            - How do we insert 99 after 2? (0 -> 1 -> 2 -> 99 -> 3)
            - Make our new node
                - value = 99
                - next = ??
            - traverse through the linked list until current->value == 2
            - At this point, current = 2 and current->next = 3
            - new_node->next = current->next
            - current->next = new_node
    //// EDGE CASE: Head = NULL
        if (current == NULL) {
            head = new_node;
            return head;
        }

//// How to compare names/strings
    - We can't go if ("john" = "john")
    - we have to compare strings using a function strcmp
    - strcmp("john", "john") will return 0 if they're the same
    - So we can do things like:
        - if (strcmp("john", "john") == 0) {
            THEN THEY"RE THE SAME!!
        }
//// Lab Question 1: list_print


