#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "prepinsta";
// //char str2[] = {'p','r','e','p'};  // str2 does not have a null terminator (\0) at the end. Without it, when printf("%s\n", str2); is called, the function continues reading memory until it finds a \0, which may lead to undefined behavior. In this case, printf keeps reading past str2 and starts printing whatever is stored after it in memory, which happens to be the content of str1 ("prepinsta").
    char str2[] = {'p','r','e','p','\0'};  // Declaring str2 as a character array
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
