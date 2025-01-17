// // Dont use gets and puts as it is depricated "Buffer overflow".
// // If u see the depricate word that mens it's going to be removed as new method is going to be introduced.
#include<stdio.h>
#include<string.h>
int main(){
// char s[30];
// printf("Enter the string :\n");
// gets(s);
// printf("The entered string is : \n");

// // fgets
char str[20];
printf("Enter the string : \n");
fgets(str,20,stdin);
printf("The entered string is : %s \n",str);

    return 0;
}