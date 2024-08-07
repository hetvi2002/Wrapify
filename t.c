#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Create a hardlink
    int hLink = link(argv[1], "hardLink.txt");

    // Create a softlink
    int sLink = symlink(argv[1], "softLink.txt");
    struct stat st;
    struct stat lst;

    if (hLink != -1) {
        if (stat(argv[1], &st) != -1) {
            printf("Original file inode no: %lu\n", st.st_ino);
            printf("Hardlink inode no: %lu\n", st.st_ino);
            printf("Hardlink created successfully\n");
        } else {
            perror("Error in getting file stats");
        }
    } else {
        perror("Error in creating hardlink");
    }

    if (sLink != -1) {
        if (lstat(, &lst) != -1) {
            printf("Softlink inode no: %lu\n", lst.st_ino);
            printf("Softlink created successfully\n");
        } else {
            perror("Error in getting softlink stats");
        }
    } else {
        perror("Error in creating softlink");
    }

    return 0;
}