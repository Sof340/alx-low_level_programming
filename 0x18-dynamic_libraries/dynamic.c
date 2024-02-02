#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void _puts(char *s) {
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
}

char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while ((*dest++ = *src++) != '\0');
    return ptr;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    if (*s == '-') {
        sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }
    return result * sign;
}

char *_strcat(char *dest, char *src) {
    char *ptr = dest + strlen(dest);
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest + strlen(dest);
    while (*src != '\0' && n-- > 0) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
char *_strncpy(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*src != '\0' && n-- > 0) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n-- > 0) {
        *ptr++ = b;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr_dest = dest;
    char *ptr_src = src;
    while (n-- > 0) {
        *ptr_dest++ = *ptr_src++;
    }
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return s;
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL)
            return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0')
            return haystack;
        haystack++;
    }
    return NULL;
}

