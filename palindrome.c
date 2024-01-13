//
// Created by 12san on 13-01-2024.
//
#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int x) {
    int originalNum = x;
    int reverseNum = 0;

    while (x > 0) {
        int remainder = x % 10;
        reverseNum = reverseNum * 10 + remainder;
        x = x / 10;
    }

    return originalNum == reverseNum;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number_of_times> <number_to_check>\n", argv[0]);
        return 1;
    }

    int t = atoi(argv[1]);
    int x = atoi(argv[2]);

    for (int i = 0; i < t; i++) {
        if (isPalindrome(x)) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }

    return 0;
}
