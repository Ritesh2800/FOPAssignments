#include <stdio.h>
#include <string.h>

//;ength of string
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

//reverse string
void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

//compare two strings
int compareString(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

//palindrome
int isPalindrome(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not palindrome
        }
    }
    return 1; // Palindrome
}

//substring
void substring(char str[], int start, int length, char sub[]) {
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        sub[i] = str[start + i];
    }
    sub[i] = '\0';
}

int main() {
    char str1[100], str2[100], sub[100];
    int start, length;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length
    printf("Length of first string: %d\n", stringLength(str1));

    // Reverse
    reverseString(str1);
    printf("Reversed first string: %s\n", str1);

    // Compare
    int cmp = compareString(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else if (cmp > 0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    // Palindrome
    if (isPalindrome(str1))
        printf("First string is a palindrome\n");
    else
        printf("First string is not a palindrome\n");

    // Substring
    printf("Enter start index and length for substring: ");
    scanf("%d %d", &start, &length);

    substring(str1, start, length, sub);
    printf("Substring: %s\n", sub);

    return 0;
}
