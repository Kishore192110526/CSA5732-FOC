#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        while (!isalnum(str[j]) && i < j) {
            j--;
        }
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    return 0;
}
