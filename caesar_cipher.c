#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT_LENGTH 100

// Function prototypes
void encrypt(char text[], int shift);
void decrypt(char text[], int shift);
void to_uppercase(char text[]);

int main() {
    char text[MAX_TEXT_LENGTH];
    int shift, choice;
    
    printf("Enter the text: ");
    fgets(text, MAX_TEXT_LENGTH, stdin);
    text[strcspn(text, "\n")] = 0;  // Remove the newline character from input
    
    printf("Enter the shift value (1-25): ");
    scanf("%d", &shift);
    
    // Validate shift value
    if(shift < 1 || shift > 25) {
        printf("Invalid shift value. Please enter a value between 1 and 25.\n");
        return 1;
    }
    printf("Choose the operation:\n1. Encrypt\n2. Decrypt\nEnter your choice: ");
    scanf("%d", &choice);

    // Clear the input buffer
    while ((getchar()) != '\n');
    
    // Convert text to uppercase for uniformity
    to_uppercase(text);

    switch (choice) {
        case 1:
            encrypt(text, shift);
            printf("Encrypted text: %s\n", text);
            break;
        case 2:
            decrypt(text, shift);
            printf("Decrypted text: %s\n", text);
            break;
        default:
            printf("Invalid choice. Please enter 1 for encryption or 2 for decryption.\n");
            return 1;
    }
    
    return 0;
}

void encrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isalpha(text[i])) {
            char offset = 'A';
            text[i] = (text[i] - offset + shift) % 26 + offset;
        }
    }
}

void decrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isalpha(text[i])) {
            char offset = 'A';
            text[i] = (text[i] - offset - shift + 26) % 26 + offset;
        }
    }
}

void to_uppercase(char text[]) {
    for (int i = 0; text[i] != '\0'; ++i) {
        text[i] = toupper(text[i]);
    }
}
