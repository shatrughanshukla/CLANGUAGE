#include<stdio.h>
#include<string.h>
int main(){
    char source[20] = "Hello ";
    char target[] = "shatrughan ji";
    int i,j;
    for ( i = 0; source[i]!= '\0'; ++i)
    {
        // // left blank so that by iteration we read source till space.
    }
    // i has reached till "space".
    // // // instead of the above loop we can also use // i = strlen(source); //
    for ( j = 0; target[j] != '\0'; ++i, ++j)
    {
        source[i] = target[j];   // // s[5] = t[0] then iterate till target[j] != 0;
    }
    source[i] = '\0';
    printf("The concanated string is : %s ",source);

    return 0;
} 