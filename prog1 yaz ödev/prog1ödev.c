#include <stdio.h>

// Function prototypes
void Numeric2Char(char A[], int numeric);
int Char2Numeric(char A[]);
int Show_Menu();
int Insert(int A[], int ID);
int Find(int A[], int ID);
void Show_All_IDs(int A[]);

void Numeric2Char(char A[], int numeric) {
    for (int i = 7; i >= 0; i--) {
        A[i] = (numeric % 10) + '0';
        numeric /= 10;
    }
    A[8] = '\0';
}

int Char2Numeric(char A[]) {
    int numeric = 0;
    for (int i = 0; i < 8; i++) {
        numeric = numeric * 10 + (A[i] - '0');
    }
    return numeric;
}

int Show_Menu() {
    int seçenek;
    printf("-------- MENU ------------------\n");
    printf("1--> Insert a new ID\n");
    printf("2--> Find an ID\n");
    printf("3--> Show all IDs\n");
    printf("4--> Exit\n");
    printf("Select an option (1,2,3,4): ");
    scanf("%d", &seçenek);
    return seçenek;
}

int Insert(int A[], int ID) {
    int index = ID % 100;
    int i = 0;
    while (A[index] != -1) {
        index = (index + 1) % 100;
        i++;
        if (i == 100) {
            return -2;
        }
    }
    A[index] = ID;
    return index;
}

int Find(int A[], int ID) {
    int index = ID % 100;
    int i = 0;
    while (A[index] != ID) {
        index = (index + 1) % 100;
        i++;
        if (i == 100) {
            return -2;
        }
    }
    return index;
}

void Show_All_IDs(int A[]) {
    printf("The list of IDs:\n");
    for (int i = 0; i < 100; i++) {
        if (A[i] != -1) {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
}

int main() {
    int A[100];
    for (int i = 0; i < 100; i++) {
        A[i] = -1;
    }

    int seçenek;
    int ID;
    int index;

    while (1) {
        // Main menu to select functionality
        printf("Choose a program to run:\n");
        printf("1. Integer and Character Conversion\n");
        printf("2. Employee ID Management System\n");
        printf("To exit, press 0.\n");
        scanf("%d", &seçenek);

        if (seçenek == 0) {
            return 0;
        } else if (seçenek == 1) {
            // Part 1: Handling integer and char array conversions
            while (1) {
                printf("Choose an option:\n");
                printf("To convert integer to char, press 1.\n");
                printf("To convert char to integer, press 2.\n");
                printf("To go back to the main menu, press 3.\n");
                printf("To exit, press 0.\n");
                scanf("%d", &seçenek);

                if (seçenek == 0) {
                    return 0;
                } else if (seçenek == 3) {
                    break;
                } else if (seçenek == 1) {
                    int numeric;
                    char A[9];
                    printf("Enter the numerical value with 8 digits: ");
                    scanf("%d", &numeric);
                    Numeric2Char(A, numeric);
                    printf("The character representation: %s\n", A);
                } else if (seçenek == 2) {
                    char A[9];
                    int numeric;
                    printf("Enter the string representation with 8 characters: ");
                    scanf("%s", A);
                    numeric = Char2Numeric(A);
                    printf("The integer representation: %d\n", numeric);
                } else {
                    printf("Invalid option. Please try again.\n");
                }

                printf("---------------------------------\n");
                printf("Process exited with return value 0\n");
                printf("Press any key to continue . . .\n");
            }
        } else if (seçenek == 2) {
            // Part 2: Employee ID management system
            while (1) {
                seçenek = Show_Menu();
                switch (seçenek) {
                case 1:
                    printf("Enter the ID to be stored: ");
                    scanf("%d", &ID);
                    index = Insert(A, ID);
                    if (index == -2) {
                        printf("The array is full.\n");
                    } else {
                        printf("The ID is inserted into the array at index %d.\n", index);
                    }
                    break;
                case 2:
                    printf("Enter the ID to be found: ");
                    scanf("%d", &ID);
                    index = Find(A, ID);
                    if (index == -2) {
                        printf("ID %d has not been found.\n", ID);
                    } else {
                        printf("ID %d has been found at index %d.\n", ID, index);
                    }
                    break;
                case 3:
                    Show_All_IDs(A);
                    break;
                case 4:
                    return 0;
                default:
                    printf("Invalid choice.\n");
                    break;
                }
            }
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
