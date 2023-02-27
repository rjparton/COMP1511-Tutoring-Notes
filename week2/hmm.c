#include <stdio.h>

struct message {
    char letter1;
    char letter2;
    char letter3;
    char letter4;
};
// we define what the heck a struct message is here
// a struct message contains four characters which we call letter1, letter2 ...... yes?
// we access by declaring the thing e.g msg
// msg.letter1 gives us whatever we  stored in letter1 i.e the first letter Y


// You may find it helpful to add extra procedures here. Procedures that
// encipher/decipher the entire `msg` may be useful.
//
// Likewise, procedures that encipher/decipher single letters will help reduce
// code repetition. It is completely up to you whether to create these
// procedures, but we *highly* recommend you do for practice!

// Determines cyphering for a given msg and prints out the result
void determine_ciphering(struct message msg) { // whatever we pass in, gets treated as msg in this procedure
    // TODO: Complete this procedure. This IS needed to compile your program.
    printf("Would you like to encipher or decipher this message (e/d)? ");

    char encipher_decipher;
    scanf("%c", &encipher_decipher);

    yes?

    continue yourself.

    rate me 10/5 stars :D

    
}

////////////////////////////////////////////////////////////////////////////////
///////////////////// DO NOT EDIT THIS MAIN FUNCTION ///////////////////////////
////////////////////////////////////////////////////////////////////////////////
// This main function scans a message and then calls your determine_ciphering
// procedure, passing in the message.
int main(void) {
    struct message msg;

    // struct message is the equiv of int message
    // int message // we declare the variable messge of type int. yes?
    // struct message msg // we declare a variable msg of type struct message. yes? yes. it's a type just like int.
    
    // Scan message into `msg` struct
    printf("Message: ");
    scanf(
        "%c %c %c %c",
        &msg.letter1, &msg.letter2, &msg.letter3, &msg.letter4
    );

    printf("%c\n", msg.letter3);
    // how we access what's in letter1 --> msg.letter1
    // this will print one char - the Y

    // // DO YOU UNDERSTAND THIS ??

    // Call your determine_ciphering function and pass in the message.
    // We pass in the variable msg into our procedure:
    determine_ciphering(msg); // yes? yep
}

// look, pretty fair if I'm honest lol.

// Let me give you the fundamentals

// structs are a container of information
// they are a type. just like an int.

