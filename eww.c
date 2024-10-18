#include <stdio.h>
#include <string.h>
#include <windows.h>

char inputhash[128];
char hash[128];
char string[128];
char line[258];

int cracker(FILE *fptr) {
if (fgets(line, sizeof(line), fptr)) {
    sscanf(line, "%s %s", string, hash);
        if (strcmp(hash, inputhash)== 0) {
            printf("Cracked!\n\n\n");
                printf("Input hash: %s\nCracked hash: %s\n", inputhash, string);
            fclose(fptr);
                printf("Press enter to exit...");
                    getchar();
                    getchar();
                    return 0;
        } else {
            return cracker(fptr);
        }
    } 
    printf("Could not crack... :(\n");
    printf("Press enter to exit...");
    getchar(); 
    getchar(); 
    fclose(fptr); 
    return 0; 
}

int main() {
    printf("EEEEEE   W             W  W             W\n");
    printf("E         W     W     W    W     W     W\n");
    printf("E EEEE     W   W W   W      W   W W   W\n");
    printf("E           W W   W W        W W   W W\n");
    printf("EEEEEE       W     W          W     W\n");
    printf("\n eww - the hash cracker\n made by: Rey S.\n\n\n");
    
                printf("input the hash to crack: ");
                scanf("%s", inputhash);
        FILE *fptr = fopen("ewwtable.txt", "r");
            if (!fptr) {
                printf("Could not open ewwtable, please check the file and try again!");
                    return 1;
            }
        cracker(fptr);
}
