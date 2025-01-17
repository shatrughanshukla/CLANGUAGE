#include<stdio.h>
#include<string.h>
// // strupr and strlwr is depricated in the compiler.
int main(){
char str1[] = "prepsters";
int i;
for ( i = 0; str1[i] != '\0'; i++)
{
    if (str1[i] >= 'a' && str1[i]<= 'z')
    {
        str1[i] = str1[i] - 32;
    }
    
}
printf("%s",str1);

    return 0;
}