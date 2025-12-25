#include <stdio.h>
#include "vault.h"

int main() {
    int choice;

    while (1) {
        printf("\nPassword Manager\n");
        printf("1. Add password\n");
        printf("2. List passwords\n");
        printf("3. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue;
        }
        getchar();

        if (choice == 1) add_entry();
        else if (choice == 2) list_entries();
        else if (choice == 3) break;
        else printf("Invalid option.\n");
    }

    return 0;
}
