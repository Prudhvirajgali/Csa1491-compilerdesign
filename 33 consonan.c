#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int consonant_count = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    for (int i = 0; i < strlen(sentence); i++) {
        char c = tolower(sentence[i]);
             if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            consonant_count++;
        }
    }

    printf("The total number of consonants in the sentence is: %d", consonant_count);

    return 0;
}

