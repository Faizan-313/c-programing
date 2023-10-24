#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char currentLine[100];

    // Open the input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Open the output file
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error creating the output file.\n");
        return 1;
    }

    // Read each line from the input file
    while (fgets(currentLine, sizeof(currentLine), inputFile)) {
        // Check if the line is blank
        int i = 0;
        while (currentLine[i] != '\0') {
            if (currentLine[i] != ' ' && currentLine[i] != '\t' && currentLine[i] != '\n') {
                // Write the non-blank line to the output file
                fprintf(outputFile, "%s", currentLine);
                break;
            }
            i++;
        }
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Blank lines removed successfully.\n");

    return 0;
}