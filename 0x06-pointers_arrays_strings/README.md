Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array

Prototype: char *cap string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
