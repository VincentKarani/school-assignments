#include <stdio.h>
#include <stdlib.h>
void appendToFile() {

    FILE *fptr;
    char sentence[100];

    fptr = fopen("C:\\Users\\HomePC\\Documents\\School Projects\\students.c\\data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }

    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence appended to file successfully.\n");
}
int main() {
    appendToFile();
    return 0;
}
