
#include <stdio.h>

int main() {
    char titles[5][50];
    int copies[5];

    // Input book titles and number of copies
    for (int i = 0; i < 5; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", titles[i]);

        printf("Enter number of copies: ");
        scanf("%d", &copies[i]);
    }

    // 1. Print catalog as a table
    printf("\n%-30s %s\n", "Book Title", "Copies");
    printf("----------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-30s %d\n", titles[i], copies[i]);
    }

    // 2. Count vowels in each title using nested loops
    printf("\nVowels in each book title:\n");

    for (int i = 0; i < 5; i++) {
        int vowels = 0;

        for (int j = 0; titles[i][j] != '\0'; j++) {
            char ch = titles[i][j];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U') {
                vowels++;
            }
        }

        printf("%s: %d vowels\n", titles[i], vowels);
    }

    // 3. Search titles by starting letter
    char letter;
    int found = 0;

    printf("\nEnter a starting letter to search: ");
    scanf(" %c", &letter);

    for (int i = 0; i < 5; i++) {
        if (titles[i][0] == letter ||
            titles[i][0] == letter - 'a' + 'A') {
            printf("%s (%d copies)\n", titles[i], copies[i]);
            found = 1;
        }
    }

    if (found == 0) {
        printf("No books found starting with that letter.\n");
    }

    // 4. Print title with the most copies
    int highest= 0;

    for (int i = 1; i < 5; i++) {
        if (copies[i] > copies[highest]) {
            highest = i;
        }
    }

    printf("\nBook with the most copies:\n");
    printf("Title: %s\n", titles[highest]);
    printf("Copies: %d\n", copies[highest]);

    return 0;
}


