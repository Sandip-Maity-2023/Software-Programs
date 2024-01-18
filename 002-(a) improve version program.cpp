//
// Created by 12san on 14-01-2024.
//
#include <stdio.h>

int romanToInt(char *s);

int main() {
    char romanNumeral[50];  // Assuming a maximum length for the input string
    printf("Enter a Roman Numeral: ");
    scanf("%s", romanNumeral);

    int result = romanToInt(romanNumeral);

    if (result == 0) {
        printf("Invalid Roman Numeral!\n");
    } else {
        printf("Roman Numeral: %s\n", romanNumeral);
        printf("Integer Value: %d\n", result);
    }

    return 0;
}

int romanToInt(char *s) {
    int t['X' + 1] = {
            ['I'] = 1,
            ['V'] = 5,
            ['X'] = 10,
            ['L'] = 50,
            ['C'] = 100,
            ['D'] = 500,
            ['M'] = 1000,
    }
    int res = 0;
    for (int i = 0; s[i]; i++) {
        if (t[s[i]] < t[s[i + 1]])
            res -= t[s[i]];
        else
            res += t[s[i]];
    }
    return res;
}
