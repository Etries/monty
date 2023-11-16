#include <stdlib.h>
#include <stdio.h>
#define _GNU_SOURCE
int main() {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    size_t read;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("Retrieved line of length %lu:\n", read);
        printf("%s", line);
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}





