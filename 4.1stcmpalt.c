#include<stdio.h>
#include<string.h>
int main(){
char str1[100] = "random";
char str2[100] = "raNdom";
int i;
// //for ( i = 0; str1[i]==str2[i] && str1[i]=='\0'; i++)  wrong
for ( i = 0; str1[i] != '\0' && str2[i]!='\0'; i++)  // the loop should continue while the strings are equal and neither string has reached the null terminator ('\0').
{
    if (str1[i]!=str2[i]) // // The condition inside the loop should be checked only when the strings differ.
    {
        break; // // Stop as soon as a mismatch is found.
    }
}
// // Also, you don't need to print inside the loop; instead, you can compare and then print the result after determining which string is lexicographically smaller or if they are equal.

    if (str1[i] < str2[i])
    {
        printf("str1 is lessthan str2\n");
    }
    else if (str1[i] > str2[i])
    {
        printf("str2 is less than str1\n");
    }
    else
    {
        printf("str1 is equal to str2\n");
    }

    return 0;
}