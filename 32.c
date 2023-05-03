#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int vowel_count = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++) {
        sentence[i] = tolower(sentence[i]);
    }
for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
            vowel_count++;
        }
    }
    
    printf("The total number of vowels in the sentence is: %d", vowel_count);
    return 0;
}

