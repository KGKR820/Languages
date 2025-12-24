#include <stdio.h>
#include <string.h>

int main() {
    char words[10][20] = {"banana", "apple", "orange", "grape", "kiwi", "mango", "peach", "cherry", "pear", "plum"};
    char temp[20];
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words in alphabetical order:\n");
    for(i = 0; i < 10; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
