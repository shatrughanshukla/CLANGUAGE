#include<stdio.h>
#include<string.h>
int main(){
    int x;
    char str[20];
    char string1[] = "prepinsta";
    scanf("%d",&x);
    scanf("%s",str);

    printf("%d\n",x);
    // // printf("%s\n",str[5]); // %s needs address
    printf("%s\n",&str[5]);  // it goes to 5th position and starts printing further till it finds \0.
    printf("%s\n",str+5);  // it goes to 5th position and starts printing further till it finds \0.
    printf("%s %s %s\n",&string1[5],&5[string1],string1+5);
    printf("%c %c %c %c",*string1+5 ,*(string1+5), string1[5], 5[string1]);
    return 0;
}