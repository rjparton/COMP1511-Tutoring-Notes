// strcpy
// play around with \0 position

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char t[100];

    // Null terminating character = '/0'

    printf("Enter a string: ");
    // fgets(location, size, stdin);
    // read in string
    // fgets(s, 100, stdin);

    // // print string
    // fputs(s, stdout);
    // printf("%s", s);


    // hello world = 11 characters
    for (int i = 0; i < 11; i++) {
        scanf("%c", &s[i]);
    }
    s[5] = '\0';
    printf("%s\n", s);


    // printf("%s", s);

    // char* strcpy(char* destination, const char* source);
    strcpy(t, s);
    // print t
    printf("%s\n", t);


    s[0] = 'a';

    // 0 if s == t
    // >0 if s > t
    // <0 if s < t
    printf("%d\n", strcmp(s,t));


}
