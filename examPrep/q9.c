
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 1000

/*
hello
OLLEH

hello world
world hello

 */


int main() {

    int countForEachLetter[26]; // each index represents a character: a = index 0, b = index 1, etc.. countFor..[0] = how many A's are in both strings
    // countForEachLetter[0] represents whether an 'a' character is in both strings
    // countForEachLetter[25] represents whether an 'z' character is in both strings
    for (int i = 0; i < 26; i++) {
        countForEachLetter[i] = 0;
    }
    // equiv of:
    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;

    char string1[MAX_SIZE];
    char string2[MAX_SIZE];

    char currChar;
    int len1 = 0;
    int len2 = 0;

    // string1
    scanf("%c", &currChar);
    while (currChar != '\n') {

        string1[len1] = currChar;
        len1++;
        scanf("%c", &currChar);
    }

    // string2
    scanf("%c", &currChar);
    while (currChar != '\n') {

        string2[len2] = currChar;
        len2++;
        scanf("%c", &currChar);
    }


    // Compare each character of string1 to each character of string2
    for (int i = 0; i < len1; i++) {
        // check if it's an alphabet character
        if (isalpha(string1[i])) {
            for (int j = 0; j < len1; j++) {
                if (tolower(string1[i]) == tolower(string2[j])) {
                    // string1[i] = h
                    // h == 104 in ascii
                    // a == 97 in ascii
                    // 104 - 97 == 7
                    // countForEachLetter[7] == 'h'
                    countForEachLetter[tolower(string1[i]) - 'a']++;    // a - a == 0, b - a == 1
                }
            }
        }
    }

    int countDistinctCommonCharacters = 0; /// print this

    // loop through the hashmap. If the count of any character is > 0, then the character is common to both strings!
    for (int i = 0; i < 26; i++) {
        if (countForEachLetter[i] > 0) {
            countDistinctCommonCharacters++;
        }
    }

    printf("%d\n", countDistinctCommonCharacters);

    return 0;
}