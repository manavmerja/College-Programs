#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    FILE *file = fopen("Demo.txt", "r");
    if (file == NULL) {
        printf("Could not open file Demo.txt\n");
        return 1;
    }

    char word[100];

    // Read words from the file and reverse each word
    while (fscanf(file, "%s", word) == 1) {
        reverse_string(word);
        printf("%s ", word);
    }

    fclose(file);
    return 0;
}
