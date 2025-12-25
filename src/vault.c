#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vault.h"
#include "crypto.h"
#include "utils.h"

#define VAULT_FILE "data/vault.dat"
#define KEY 0x5A

void add_entry() {
    char *site = malloc(100);
    char *password = malloc(100);

    if (!site || !password) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Site: ");
    fgets(site, 100, stdin);
    trim_newline(site);

    printf("Password: ");
    fgets(password, 100, stdin);
    trim_newline(password);

    xor_encrypt(password, KEY);

    FILE *file = fopen(VAULT_FILE, "a");
    if (!file) {
        printf("Failed to open vault file.\n");
        free(site);
        free(password);
        return;
    }

    fprintf(file, "%s:%s\n", site, password);
    fclose(file);

    free(site);
    free(password);

    printf("Entry saved securely.\n");
}

void list_entries() {
    FILE *file = fopen(VAULT_FILE, "r");
    if (!file) {
        printf("No vault found.\n");
        return;
    }

    char line[256];

    while (fgets(line, sizeof(line), file)) {
        char *site = strtok(line, ":");
        char *password = strtok(NULL, "\n");

        xor_encrypt(password, KEY);
        printf("Site: %s | Password: %s\n", site, password);
    }

    fclose(file);
}
