#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // If no file name is given, display an error message

    if (argc < 2) {
        printf("Usage: wcat <filename>\n");
        return 1;
    }

    // The operation will be performed based on the file name

    for (int i = 1; i < argc; i++) {
        FILE *fp = fopen(argv[i], "r");
        
      // If the file cannot be opened, display an error message

        if (fp == NULL) {
            printf("wcat: cannot open file %s\n", argv[i]);
            return 1;
        }

        // Read and print the contents of the file line by line.

        char buffer[256];  
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
           
            printf("%s", buffer);
        }

        // close the file
        fclose(fp);
    }

    return 0;
}

