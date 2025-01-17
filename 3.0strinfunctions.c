// // strlen
#include<stdio.h>
#include<string.h>
// int main(){
//     int len;
//     char array[20] = "Hii Shukla";
//     len = strlen(array);
//     printf("The length of %s is %d\n",array, len);

//     return 0;
// }

// // without strlen.
int main(){
    int i = 0;
    char array[1200];
    printf("Enter string\n");
    scanf("%s",array);

    while (array[i] != '\0')
    {
        i++;
        
    }

    printf("The length of the string %s is %d",array, i);
    return 0;
}