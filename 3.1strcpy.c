// #include<stdio.h>
// #include<string.h>
// int main(){
//    char source[] = "paste me";
//    char target[20] = "";
//    strcpy(target,source);
//    printf("I'm target and source gave me the value %s", target);  
//     return 0;
// }

// // // without strcpy.
int main(){
char source[] = "paste me";
char target[20] = "";
int i = 0;
for (i = 0; source[i] != '\0'; ++i) // // i++ or ++i doen't matter. 
{
    target[i] = source[i];
}
target[i] = '\0';  // Safeguard to ensure the string is properly null-terminated.

printf("The input in target is now %s",target);
    return 0;
}